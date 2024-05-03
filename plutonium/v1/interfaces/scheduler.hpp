#pragma once

namespace plutonium::sdk::v1::interfaces
{
    class scheduler
    {
    public:
        enum thread : unsigned int
        {
            main = 0,
            game = 1,
        };

        enum evaluation : bool
        {
            reschedule = false,
            remove = true
        };

        using scheduled_callback = void(*PLUTONIUM_CALLBACK)();
        using reschedulable_callback = evaluation(*PLUTONIUM_CALLBACK)();

        virtual void delay(scheduled_callback callback, unsigned int milliseconds, thread thread = main) = 0;
        virtual void every(reschedulable_callback callback, unsigned int milliseconds, thread thread = main) = 0;
        virtual void on_frame(scheduled_callback callback, thread thread = main) = 0;
        virtual void once(scheduled_callback callback, thread thread = main) = 0;
    };
}
