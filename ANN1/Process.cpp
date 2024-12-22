#include "pch.h"

int YPoint(int x, double* w, int Carpan = 1) {
	return(int)((double)(-1 * (double)Carpan * w[2] - w[0] * x) / (double)(w[1]));
}