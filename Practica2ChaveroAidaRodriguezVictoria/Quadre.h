#ifndef QUADRE_H
#define QUADRE_H


class Quadre
{
    public:
        Quadre(Codi codi, int tipus, int alçada, int amplada, int fondaria);
        virtual ~Quadre();
        const OLI = 2;
        const AQUARELA = 3;
        const ACRILICA = 4;
        int getTipus();
        void visualitza();

    protected:

    private:
        int tipus; // 2, 3 o 4
};

#endif // QUADRE_H
