//
// Created by strahinjas on 3/18/25.
//

#ifndef MAINCONTROLLER_HPP
#define MAINCONTROLLER_HPP

#include <engine/core/Controller.hpp>
#include <engine/core/Engine.hpp>

namespace my_project {
    class MyController final : public engine::core::Controller {
    public:
        [[nodiscard]] std::string_view name() const override { return "my_project::MyController"; };

    private:
        void initialize() override;

        bool loop() override;

        void poll_events() override;

        void update() override;

        void begin_draw() override;

        void draw() override;

        void end_draw() override;

        void draw_light_cube();

        void draw_island_model();

        void draw_light_source_birds();

        void draw_model_dog();

        void draw_skybox();

        void setup_random_rock_models_matrices();

        void draw_instance();

        void initialize_camera();

        void set_timer(float delay_seconds);

        void scene_event1();

        std::vector<glm::mat4> m_model_matrices{0};
        uint32_t m_instance_count = 1000;

        bool m_event1_in_waiting{false};
        bool m_draw_dog{true};
        static engine::util::Timer inner_event_timer;
        glm::vec3 m_directional_strength = {0.8f, 0.8f, 0.8f};
        bool m_enable_gui{false};
        bool m_enable_cursor{true};
    };
}

#endif //MAINCONTROLLER_HPP
