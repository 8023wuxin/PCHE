#include "udf.h"
DEFINE_PROPERTY(LBE_LAMDA,C,T)
{
real cond;
real temp=C_T(c,t);
cond=6.851+temp*10.147e-3;
return cond;
}
DEFINE_PROPERTY(LBE_mu,c,t)
{
real mu;
real temp=C_T(c,t);
mu=exp(741/temp)*0.497e-3;
return mu;
}
DEFINE_SPECIFIC_HEAT(LBE_cp,T,Tref,h,yi)
{
real cp;
cp=160-T*2.385e-2;
*h=cp*(T-Tref);
return cp;
}
DEFINE_PROPERTY(LBE_rho, c, t)
{
real rho;
real temp=C_T(c,t);
rho=11113-1.75*temp;
return rho;
}
