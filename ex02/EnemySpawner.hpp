#pragma once

class EnemySpawner {
    private: 
      int _maxCount;
      int _spawnedCount;

    public:
      EnemySpawner(int maxCount);

      int spawn();

      int spawnCount() const;
  };