class Complexe {
    //propriétés
    private:
        float partie_reelle;
        float partie_imaginaire;
    // méthodes
    public:
    // constructeurs 
    Complexe() ;
    Complexe(float reelle, float imaginaire); 
    //destructeur
    ~Complexe();
    float P_Reelle();
    float P_Imaginaire();
    void forme_algebrique();
   

};