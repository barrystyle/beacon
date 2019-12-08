#include <amount.h>
#include <util.h>

CAmount CollateralRequired()
{
    const CAmount nCollateralRequired = 1000 * COIN;
    return nCollateralRequired;
}

CAmount MixCollateralRequired()
{
    const CAmount nCollateralRequired = 999.99 * COIN;
    return nCollateralRequired;
}

