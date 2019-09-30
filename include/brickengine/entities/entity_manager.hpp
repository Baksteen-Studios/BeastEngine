#ifndef FILE_ENTITY_MANAGER_HPP
#define FILE_ENTITY_MANAGER_HPP

#include "brickengine/components/component.hpp"
#include "brickengine/entities/entity_with_component.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <unordered_map> 

class EntityManager{
    public:
        EntityManager();
        ~EntityManager();

        int createEntity(const std::vector<Component> &components);
        void removeEntity(const int entityId);

        template <class T>
        std::unique_ptr<std::vector<std::unique_ptr<EntityWithComponent<T>>>> getAllEntities();
        
        template <class T>
        T* getComponent(const int entityId) const;

        void addComponentToEntity(const int entityId, const Component component); 

        template <class T>
        void removeComponentFromEntity(const int entityId);

    private:
        std::unique_ptr<std::vector<int>> entities;
        std::unique_ptr<int> lowest_unassigned_entity_id;
        std::unique_ptr<std::unordered_map<std::string, std::unordered_map<int, std::unique_ptr<Component>>>> components_by_class;
};

#endif /* FILE_ENTITY_MANAGER_HPP */