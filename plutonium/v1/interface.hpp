#pragma once

#include "types/entity.hpp"

#include "interfaces/callbacks.hpp"
#include "interfaces/client_command.hpp"
#include "interfaces/gsc.hpp"
#include "interfaces/logging.hpp"
#include "interfaces/scheduler.hpp"

namespace plutonium::sdk::v1
{
    class iinterface
    {
    public:
        virtual ~iinterface() = default;

        virtual interfaces::callbacks* callbacks() = 0;
        virtual interfaces::client_command* client_command() = 0;
        virtual interfaces::gsc* gsc() = 0;
        virtual interfaces::logging* logging() = 0;
        virtual interfaces::scheduler* scheduler() = 0;
    };
}
