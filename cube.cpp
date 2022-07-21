class Cube {
    public:
        char Up[2][2] ;
        char Down[2][2] ;
        char Right[2][2] ;
        char Left[2][2] ;
        char Front[2][2] ;
        char Back[2][2] ;
        Cube() {
            for (int i = 0 ; i < 2 ; i++) {
                for (int j = 0 ; j < 2 ; j++) {
                    Up[i][j] = 'w' ;
                    Down[i][j] = 'y' ;
                    Right[i][j] = 'r' ;
                    Left[i][j] = 'o' ;
                    Front[i][j] = 'g' ;
                    Back[i][j] = 'b' ;
                }
            }
        }
        void rotateFrontClkw() {
            char att = Front[0][1] ;
            Front[0][1] = Front[0][0] ;
            Front[0][0] = Front[1][0] ;
            Front[1][0] = Front[1][1] ;
            Front[1][1] = att ;

            char a , b ;
            a = Up[1][0] ;
            b = Up[1][1] ;
            Up[1][0] = Left[1][1];
            Up[1][1] = Left[0][1] ;

            Left[1][1] = Down[0][1];
            Left[0][1] = Down[0][0];

            Down[0][1] = Right[0][0] ;
            Down[0][0] = Right[1][0];

            Right[0][0] = a ;
            Right[1][0] = b ;
        }

        void rotateFrontAntiClkw() {
            rotateFrontClkw() ;
            rotateFrontClkw() ;
            rotateFrontClkw() ;
        }

        
};