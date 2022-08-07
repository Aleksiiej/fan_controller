#pragma once

class Fan
{
public:
    Fan() = default;
    Fan(const Fan &other) = delete;
    Fan(const Fan &&other) = delete;

    void setSpeed(int newRpm);
    int getSpeed() const noexcept;
    bool disable() noexcept;
    bool enable() noexcept;

private:
    int rpm{0};
};