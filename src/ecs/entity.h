

class Entity {
    private:
        int id;
    public: 
        Entity(int id): id(id) {};
        size_t get_id() const;
}