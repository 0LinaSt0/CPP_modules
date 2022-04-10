/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:36:52 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 17:42:01 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/*
	overflow of DOUBLE -> [-inf; inf] || [-1.0/0.0; +1.0/0.0] -> +-infinity
	overflow of FLOAT -> [-inff; inff] || [-1.0/0.0; +1.0/0.0] -> +-infinity
	overflow of INT (if cast it from double) -> [-2147483648] -> it's always negative max int
*/
void	overCheck(double Double, std::string str, tOverflows* over){
	over->Int = 0;
	over->Double = 0;
	over->Float = 0;	
	if (str.length() > 1){
		//check overflow INT
		if (static_cast<int>(Double) == -2147483648 && str.compare("-2147483648")){
			over->Int = 1;
			//check overflow FLOAT
			if ((static_cast<float>(Double) == +1.0/0.0 
						&& !(!str.compare("+inf") || !str.compare("+inff")
							|| !str.compare("inf") || !str.compare("inff")))
				|| (static_cast<float>(Double) == -1.0/0.0 
						&& !(!str.compare("-inf") || !str.compare("-inff")))){
				over->Float = 1;
				//check overflow DOUBLE
				if ((Double == +1.0/0.0 && str.compare("+inf"))
						|| (Double == -1.0/0.0 && str.compare("-inf"))){
					over->Double = 1;
				}
			}
		}
	}
}

bool	compareDoubles(double A, double B){
	if (fabs(A - B) < 0.0000001f)
		return true;
	return false;
}

bool	compareFloats(float A, float B){
	if (fabs(A - B) < 0.01f)
		return true;
	return false;
}

int	main(int argc, char **argv){	
	if (argc != 2){
		std::cout << "Error: please, give me one argument: "
				<< "char, int, float or double." 
				<< std::endl;
		return (1);
	}

	std::string str = (std::string)argv[1];
	double	Double;
	tOverflows	over;

	if (str.length() == 1 && (str.compare("0") && str.compare("1")
			&& str.compare("2") && str.compare("3") && str.compare("4")
			&& str.compare("5") && str.compare("6") && str.compare("7")
			&& str.compare("8") && str.compare("9"))){
		Double = static_cast<double>(argv[1][0]);
	} else {
		Double = std::atof(argv[1]);
	}

	overCheck(Double, (std::string)argv[1], &over);	

	printChar(static_cast<int>(Double), &over);
	printInt(static_cast<int>(Double), &over);
	printFloat(static_cast<float>(Double), &over);
	printDouble(Double, &over);
}