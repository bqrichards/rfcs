//
// Created by Brandon Richards on 12/24/21.
//

#ifndef RFCS_TEST_TELEMETRY_H
#define RFCS_TEST_TELEMETRY_H

#include <Arduino.h>
#include <rocket_sensor_data.h>
#include <telemetry.h>
#include <unity.h>

void test_empty_sensor_data();
void test_acceleration();
void test_orientation();
void test_pressure();
void test_altitude();
void test_temperature();
void test_all_data();

void test_imu_status();
void test_bmp_status();

void test_ground_altitude_false();
void test_ground_altitude_true();

#endif  // RFCS_TEST_TELEMETRY_H
