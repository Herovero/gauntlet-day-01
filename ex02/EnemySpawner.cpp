#include "EnemySpawner.hpp"

EnemySpawner::EnemySpawner(int maxCount) : _maxCount(maxCount), _spawnedCount(0) {}

int EnemySpawner::spawn() {
    if (_spawnedCount < _maxCount) {
        _spawnedCount++;
    }
    return _spawnedCount;
}

int EnemySpawner::spawnCount() const {
    return _spawnedCount;
}