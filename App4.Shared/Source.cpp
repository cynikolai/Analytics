#include "pch.h"
#include "Source.h"

void frequency_gen(std::vector<double> &times)
{
	for (int i = 0; i < times.size(); i++)
	{
		times[i] = 1 / times[i];
	}
}

double mean(std::vector<double> frequencies)
{
	double mean_num = 0;
	for (int i = 0; i < frequencies.size(); i++)
	{
		mean_num += frequencies[i];
	}
	mean_num = mean_num / frequencies.size();
	return mean_num;
}

double standard_deviation(std::vector<double> frequencies, double mean)
{
	double st_dev = 0;
	for (int i = 0; i < frequencies.size(); i++)
	{
		st_dev += (frequencies[i] - mean) * (frequencies[i] - mean);
	}
	st_dev = st_dev / frequencies.size();
	st_dev = sqrt(st_dev);
	return st_dev;
}

int category_determiner(double frequency, double mean, double standard_dev)
{
	double z_value = frequency - mean;
	double z_score = z_value / standard_dev;
	if (z_score <= -1.3)
	{
		return 0;
	}
	else if (-.87 >= z_score && z_score > -1.3)
	{
		return 1;
	}
	else if (-.53 >= z_score && z_score > -.87)
	{
		return 2;
	}
	else if (-.26 >= z_score && z_score > -.53)
	{
		return 3;
	}
	else if (0 >= z_score && z_score > -.26)
	{
		return 4;
	}
	else if (.26 >= z_score && z_score > 0)
	{
		return 5;
	}
	else if (.53 >= z_score && z_score > .26)
	{
		return 6;
	}
	else if (.87 >= z_score && z_score >.53)
	{
		return 7;
	}
	else if (1.3 >= z_score && z_score > .87)
	{
		return 8;
	}
	else
	{
		return 9;
	}
}
