
#include <engine/resources/Model.hpp>
#include <engine/resources/Shader.hpp>

namespace engine::resources {
    void Model::draw(const Shader *shader) {
        shader->use();
        for (auto &mesh: m_meshes) { mesh.draw(shader); }
    }

    void Model::destroy() { for (auto &mesh: m_meshes) { mesh.destroy(); } }

    void Model::set_instance_transforms(const std::vector<glm::mat4> &instance_matrices) {
        for (auto &mesh: m_meshes)
            mesh.set_instance_transforms_mesh(instance_matrices);
    }

    void Model::draw_instanced_ver(const Shader *shader, uint32_t instances_count) {
        shader->use();
        for (auto &mesh: m_meshes) mesh.draw_instanced_ver(shader, instances_count);
    }
}
