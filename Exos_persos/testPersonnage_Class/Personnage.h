class Personnage
{
    public:
    void receiveDmg(int nbDegats);
    void attack(Personnage& cible);
    void heal(int quantiteHeal);
    void switchWeapon(string newArme, int dmgNewArme);
    bool alive();

    private:
    int m_vie;
    int m_mana;
    string m_nomArme;
    int m_degatArme;

};
