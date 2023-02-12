#ifndef QUATERNION_H
#define QUATERNION_H

#include "stm32f4xx_hal.h"
#include "def32.h"
#include "basic_math.h"

// Type define for quaternion
typedef struct
{
    float32_t q0, q1, q2, q3;
} QuaternionTypeDef;

// Type define for Euler angle
typedef struct
{
    float32_t thx, thy, thz;
} EulerAngleTypeDef;


void QuaternionNorm(QuaternionTypeDef *q);
void QuaternionMult(const QuaternionTypeDef *qa, const QuaternionTypeDef *qb, QuaternionTypeDef *qo);
void QuaternionRotation(const QuaternionTypeDef *qr, const QuaternionTypeDef *qv, QuaternionTypeDef *qo);
void QuaternionConj(const QuaternionTypeDef *qa, QuaternionTypeDef *qo);
void QuaternionToEuler(const QuaternionTypeDef *qr, EulerAngleTypeDef *ea);

#define MAX_RAD    1.5


#endif /* QUATERNION_H */
