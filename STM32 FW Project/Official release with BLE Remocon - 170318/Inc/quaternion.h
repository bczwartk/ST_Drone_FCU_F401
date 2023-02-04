#ifndef QUATERNION_H
#define QUATERNION_H

#include "stm32f4xx_hal.h"
#include "def32.h"
#include "basic_math.h"

// Type define for quaternion
typedef struct
{
    float32_t q0, q1, q2, q3;
}QuaternionTypeDef;

// Type define for Euler angle
typedef struct
{
    float32_t thx, thy, thz;
}EulerAngleTypeDef;


void QuaternionNorm(QuaternionTypeDef *q);
void QuaternionMult(QuaternionTypeDef *qa, QuaternionTypeDef *qb, QuaternionTypeDef *qo);
void QuaternionRotation(QuaternionTypeDef *qr, QuaternionTypeDef *qv, QuaternionTypeDef *qo);
void QuaternionConj(QuaternionTypeDef *qa, QuaternionTypeDef *qo);
void QuaternionToEuler(QuaternionTypeDef *qr, EulerAngleTypeDef *ea);

#define MAX_RAD    1.5


#endif /* QUATERNION_H */
