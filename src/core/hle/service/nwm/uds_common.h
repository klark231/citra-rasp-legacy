// Copyright 2024 Citra Emulator Project / AzaharPlus
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "common/common_types.h"

namespace Service::NWM {

// The low byte of an EAPoL-Start identifies how a client joins. Azahar and the MHGU crossplay hub
// put this value here; stock Citra left a hardcoded 1. ParseCompatibleEAPoLStart accepts both.
enum class ConnectionType : u8 {
    Client = 0x1,
    Spectator = 0x2,
};

} // namespace Service::NWM
