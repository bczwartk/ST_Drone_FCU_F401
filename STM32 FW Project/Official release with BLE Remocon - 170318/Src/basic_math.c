#include "basic_math.h"


float32_t Sqrt(float32_t x)
{
  union /* parasoft-suppress MISRAC2012-RULE_19_2-a "by design - this is part of fast sqrt calc" */
  {
	int32_t i;
    float32_t x;
  } u;
  u.x = x;
  u.i = ((1 << 29) + (u.i >> 1)) - (1 << 22);
  
  // Two Babylonian Steps (simplified from:)
  // u.x = 0.5f * (u.x + x/u.x);
  // u.x = 0.5f * (u.x + x/u.x);
  u.x =          u.x  + (x / u.x);
  u.x = (0.25f * u.x) + (x / u.x);

  return u.x;
}


//---------------------------------------------------------------------------------------------------
// Fast inverse square-root
// See: http://en.wikipedia.org/wiki/Fast_inverse_square_root

float32_t invSqrt(float32_t x)
{
	float32_t halfx = 0.5f * x;
	float32_t y = x;
	int32_t i = *(int32_t*) &y;
	i = 0x5f3759df - (i >> 1);
	y = *(float32_t*) &i;
	y = y * (1.5f - (halfx * y * y));
	return y;
}
