#pragma once

// 전방 선언(Forward declaration).
class Vector;
class Entity
{
public:
	Entity() = default;
	Entity(int x, int y);
	// 복사 생성자(Copy constructor).
	Entity(const Entity& other);

	~Entity();

private:
	Vector* position = nullptr;
};

