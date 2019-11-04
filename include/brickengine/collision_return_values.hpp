#ifndef FILE_COLLISION_RETURN_VALUES_HPP
#define FILE_COLLISION_RETURN_VALUES_HPP

#include <optional>
struct CollisionReturnValues{
    CollisionReturnValues(double spaceLeft, int objectId) : spaceLeft(spaceLeft), objectId(objectId) {}
    double spaceLeft;
    int objectId;
};

struct TriggerReturnValues{
    TriggerReturnValues(bool isInTrigger, std::optional<int> objectId) : isInTrigger(isInTrigger), objectId(objectId) {}
    bool isInTrigger;
    std::optional<int> objectId;
};

#endif // FILE_COLLISION_RETURN_VALUES_HPP