//
// Created by matfrg on 3/14/25.
//
#include <engine/core/Engine.hpp>
#include <MyController.hpp>

// I want to create a controller that enables depth testing
void MyController::initialize() { engine::graphics::OpenGL::enable_depth_testing(); }
