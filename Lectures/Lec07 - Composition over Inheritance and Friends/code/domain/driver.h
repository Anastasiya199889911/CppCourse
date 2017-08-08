#pragma once

#include <string>
#include "employee.h"
#include "vehicle.h"
#include "booking.h"

class Driver : public Employee, public IPrintable
{
public:
    Driver();
    explicit Driver(const std::string& name);
    Driver(const std::string& name, const Vehicle& vehicle);

    void setVehicle(const Vehicle& vehicle);
    void setRate(double rate);
    const Vehicle* getVehicle() const;
    double getRate() const;
    bool hasTruck() const;

    void handleBooking(Booking& booking);

    // переопределение методов Employee
public:
    double salary_bonus(double salary) const override;
    std::string benefit() const;

    // реализация интерфейса IPrintable
public:
    void print() const override;

public:
    static double top_rate;

private:
    double rate_;

    const Vehicle* vehicle_;
};
