#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
  float mat[4][4];
public:
  /* Type 1: Translation; Type 2: Rotation; Type 3: Scaling; else: error */
  Matrix(float a, float b, float c, int type);  
};

#endif