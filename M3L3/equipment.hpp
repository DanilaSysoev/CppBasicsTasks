enum class weapon_type {
    sword,
    hammer,
    axe,
    pike
};
enum class armor_type {
    helmet,
    breastplete,
    leggins,
    boots
};
struct weapon {
    weapon_type type;
    int damage;
    int armor_destroying;
    int weight;
    int cost;
};
struct armor {
    armor_type type;
    int crushing_resist;
    int damage_resist;
    int weight;
    int cost;
};

void select_weapons(weapon weapons[], int weapons_count, weapon selected[]);
void select_armors(armor armors[], int armors_count, armor selected[]);
