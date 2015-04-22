#pragma once

#include "ModuleManager.h"

class INppPlugin : public IModuleInterface {
  public:

    /// Get access directly to the plugin
    static inline INppPlugin& Get() {
      return FModuleManager::LoadModuleChecked< INppPlugin >( "NppPlugin" );
    }

    /// Check if the plugin is loaded
    static inline bool IsAvailable() {
      return FModuleManager::Get().IsModuleLoaded( "NppPlugin" );
    }
};
