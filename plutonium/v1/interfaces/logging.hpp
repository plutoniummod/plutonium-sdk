#pragma once

namespace plutonium::sdk::v1::interfaces
{
    class logging
    {
    private:
        virtual void info_internal(const char* message) = 0;
        virtual void warn_internal(const char* message) = 0;
        virtual void error_internal(const char* message) = 0;

    public:
        void info(const std::string& message)
        {
            this->info_internal(message.c_str());
        }

        void warn(const std::string& message)
        {
            this->warn_internal(message.c_str());
        }

        void error(const std::string& message)
        {
            this->error_internal(message.c_str());
        }
    };
}
