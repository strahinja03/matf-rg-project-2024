//
// Created by matfrg on 3/14/25.
//
#include <engine/core/Engine.hpp>
#include <spdlog/spdlog.h>
#include <MyApp.hpp>
#include <MyController.hpp>

// The MyApp class is the central hub, so if i want to se
void MyApp::app_setup() {
    auto main_controller = register_controller<MyController>();
    main_controller->after(engine::core::Controller::get<engine::core::EngineControllersEnd>());
    spdlog::info("Hi, MyApp setup!");
}



