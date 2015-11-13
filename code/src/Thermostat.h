// Thermostat.h
#pragma once

class Thermostat
{
    private:
        float _temp;

    public:
        Thermostat() : _temp (0.0) {}

        ~Thermostat() {}

        void UpdateTemp(float temp) { _temp = temp; }

        float GetTemp() { return _temp; }
};