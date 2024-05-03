#pragma once

namespace plutonium::sdk::v1::interfaces
{
    class gsc
    {
    public:
        using method_callback = void(*PLUTONIUM_CALLBACK)(types::entref);
        using function_callback = void(*PLUTONIUM_CALLBACK)();

    private:
        virtual void register_method_internal(const char* method, method_callback callback) = 0;
        virtual void register_function_internal(const char* function, function_callback callback) = 0;

    public:
        void register_method(const std::string& message, method_callback callback)
        {
            this->register_method_internal(message.c_str(), callback);
        }

        void register_function(const std::string& function, function_callback callback)
        {
            this->register_function_internal(function.c_str(), callback);
        }
    };
}
