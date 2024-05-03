#pragma once

namespace plutonium::sdk::v1::interfaces
{
    class callbacks
    {
    public:
        using on_dvar_init_callback = void(*PLUTONIUM_CALLBACK)();
        using on_after_dvar_init_callback = void(*PLUTONIUM_CALLBACK)();
        using on_game_init_callback = void(*PLUTONIUM_CALLBACK)(int, int);
        using on_game_shutdown_callback = void(*PLUTONIUM_CALLBACK)(int);
        using on_player_pre_connect_callback = void(*PLUTONIUM_CALLBACK)(unsigned int);
        using on_player_connect_callback = void(*PLUTONIUM_CALLBACK)(unsigned int);
        using on_player_disconnect_callback = void(*PLUTONIUM_CALLBACK)(unsigned int);
        using on_scripts_load_callback = void(*PLUTONIUM_CALLBACK)();
        using on_scripts_execute_callback = void(*PLUTONIUM_CALLBACK)();

        virtual void on_dvar_init(on_dvar_init_callback callback) = 0;
        virtual void on_after_dvar_init(on_after_dvar_init_callback callback) = 0;
        virtual void on_game_init(on_game_init_callback callback) = 0;
        virtual void on_game_shutdown(on_game_shutdown_callback callback) = 0;
        virtual void on_player_pre_connect(on_player_pre_connect_callback callback) = 0;
        virtual void on_player_connect(on_player_connect_callback callback) = 0;
        virtual void on_player_disconnect(on_player_disconnect_callback callback) = 0;
        virtual void on_scripts_load(on_scripts_load_callback callback) = 0;
        virtual void on_scripts_execute(on_scripts_execute_callback callback) = 0;
    };
}
