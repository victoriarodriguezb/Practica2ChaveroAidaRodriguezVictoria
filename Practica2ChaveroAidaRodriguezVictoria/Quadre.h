#ifndef QUADRE_H
#define QUADRE_H

class Quadre
{
    public:
        Quadre();
        virtual ~Quadre();

        const static int OLI = 2;
        const static int AQUARELA = 3;
        const static int ACRILICA = 4;

    protected:

    private:
        int tipus;
};

#endif // QUADRE_H
