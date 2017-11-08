// Copyright (c) 2014-2017 Huasystem Ltd
// BeidouChain code distributed under the GPLv3 license, see COPYING file.

#include "beidouchain/beidouchain.h"


#include "version/version.h"

const char* mc_State::GetVersion()
{
    return BEIDOUCHAIN_BUILD_DESC;
}

const char* mc_State::GetFullVersion()
{
    return BEIDOUCHAIN_FULL_VERSION;
}

int mc_State::GetNumericVersion()
{
    return BEIDOUCHAIN_BUILD_DESC_NUMERIC;
}

int mc_State::GetWalletDBVersion()
{
    if(mc_gState->m_WalletMode & MC_WMD_ADDRESS_TXS)
    {
        if(mc_gState->m_WalletMode & MC_WMD_MAP_TXS)
        {
            return -1;                
        }
        else
        {
            return 2;                
        }
    }
    
    return 1;
}

int mc_State::GetProtocolVersion()
{
    return BEIDOUCHAIN_PROTOCOL_VERSION;
}
