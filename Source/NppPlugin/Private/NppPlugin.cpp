#include "NppPluginPrivatePCH.h"
#include "npp/iterator.h"
#include "npp/option.h"
#include "npp/format.h"
#include "npp/os.h"
#include "npp/result.h"
#include "npp/types.h"
#include "npp/test/test.h"
#include "npp/test/test_result.h"
#include "npp/test/test_suite.h"

/// Concrete API implementation
class FNppPlugin : public INppPlugin {
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FNppPlugin, NppPlugin )

/// Initialize
void FNppPlugin::StartupModule() {
}

/// Shutdown
void FNppPlugin::ShutdownModule() {
}
