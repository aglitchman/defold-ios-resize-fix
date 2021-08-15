
#include <dmsdk/sdk.h>

static dmExtension::Result InitializeExt(dmExtension::Params* params)
{
    return dmExtension::RESULT_OK;
}

static dmExtension::Result FinalizeExt(dmExtension::Params* params)
{
    return dmExtension::RESULT_OK;
}

DM_DECLARE_EXTENSION(ios_resize_fix, "ios_resize_fix", 0, 0, InitializeExt, 0, 0, FinalizeExt)
