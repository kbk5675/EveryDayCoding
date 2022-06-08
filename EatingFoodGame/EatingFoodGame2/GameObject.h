#pragma once
class GameObject { // �߻� Ŭ����
public:
    GameObject(int startX, int startY, int distance) { // �ʱ� ��ġ�� �̵��Ÿ� ����
        this->x = startX; this->y = startY;
        this->distance = distance;
    }
    virtual ~GameObject() {}; // ���� �Ҹ���

    virtual void move() = 0; // �̵��� �� ���ο� ��ġ�� x, y ����
    virtual char getShape() = 0; // ��ü�� ����� ��Ÿ���� ���� ����

int getX() { return x; }
    int getY() { return y; }

    bool collide(GameObject* p) { // �� ��ü�� ��ü p�� �浹������ true ����
        if (this->x == p->getX() && this->y == p->getY())
            return true;
        else
            return false;
    }

protected:
    int distance; // �� �� �̵� �Ÿ�
    int x, y; // ���� ��ġ
};

class Human : public GameObject
{
public:
    Human(int x, int y, int dis) : GameObject(x, y, dis) {}

    void move();
    char getShape() { return 'H'; }

};

class Monster : public GameObject
{
public:
    Monster(int x, int y, int dis) : GameObject(x, y, dis) 
    {
        srand((unsigned int)time(NULL));
    }

    void move();
    char getShape() { return 'M'; }

};

class Food : public GameObject
{
public:
    Food(int x, int y, int dis) : GameObject(x, y, dis) 
    {
        srand((unsigned int)time(NULL));
    }

    void move();
    char getShape() { return '@'; }

};
