class Cube {

        char Up[2][2] ;
        char Down[2][2] ;
        char Right[2][2] ;
        char Left[2][2] ;
        char Front[2][2] ;
        char Back[2][2] ;
public :
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

        void rotateBackClkw() {
            char att = Back[0][1] ;
            Back[0][1] = Back[0][0] ;
            Back[0][0] = Back[1][0] ;
            Back[1][0] = Back[1][1] ;
            Back[1][1] = att ;

            //now to the rest
            char aux1  = Up[0][1] , aux2 = Up[0][0] ;
            Up[0][1] = Right[1][1] ;
            Up[0][0] = Right[0][1] ;

            Right[1][1] = Down[1][0] ;
            Right[0][1] = Down[1][1] ;

            Down[1][0] = Left[0][0] ;
            Down[1][1] = Left[1][0] ;

            Left[0][0] = aux1 ;
            Left[1][0] = aux2 ;
        }

        void rotateBackAntiClkw() {
            rotateBackClkw() ;
            rotateBackClkw() ;
            rotateBackClkw() ;
        }

        void rotateRightClkw() {
            char aux = Right[0][0] ;
            Right[0][0] = Right[1][0] ;
            Right[1][0] = Right[1][1] ;
            Right[1][1] = Right[0][1] ;
            Right[0][1] = aux ;

            char aux1 = Up[0][1]  , aux2 = Up[1][1] ;
            Up[0][1] = Front[0][1] ;
            Up[1][1] = Front[1][1] ;

            Front[0][1] = Down[0][1] ;
            Front[1][1] = Down[1][1] ;

            Down[0][1] = Back[1][0] ;
            Down[1][1] = Back[0][0] ;

            Back[1][0] = aux1 ;
            Back[0][0] = aux2 ;
        }

        void rotateRightAntiClkw() {
            rotateRightClkw() ;
            rotateRightClkw() ;
            rotateRightClkw() ;
        }

        void rotateLeftClkw() {
            char aux = Left[0][0] ;
            Left[0][0] = Left[1][0] ;
            Left[1][0] = Left[1][1] ;
            Left[1][1] = Left[0][1] ;
            Left[0][1] = aux ;

            char aux1 = Up[0][0] , aux2 = Up[1][0] ;

            Up[0][0] = Back[1][1] ;
            Up[1][0] = Back[0][1] ;

            Back[1][1] = Down[0][0] ;
            Back[0][1] = Down[1][0] ;

            Down[0][0] = Front[0][0] ;
            Down[1][0] = Front[1][0] ;

            Front[0][0] = aux1 ;
            Front[1][0] = aux2 ;
        }

        void rotateLeftAntiClkw(){
            rotateLeftClkw() ;
            rotateLeftClkw() ;
            rotateLeftClkw() ;
        }

        void rotateUpClkw() {
            char aux = Up[0][0] ;
            Up[0][0] = Up[1][0] ;
            Up[1][0] = Up[1][1] ;
            Up[1][1] = Up[0][1] ;
            Up[0][1] = aux ;

            // now the rest

            char aux1 = Back[0][0] , aux2 = Back[0][1] ;

            Back[0][0] = Left[0][0] ;
            Back[0][1] = Left[0][1] ;

            Left[0][0] = Front[0][0] ;
            Left[0][1] = Front[0][1] ;

            Front[0][0] = Right[0][0] ;
            Front[0][1] = Right[0][1] ;

            Right[0][0] = aux1 ;
            Right[0][1] = aux2 ;
        }

        void rotateUpAntiClkw(){
            rotateUpClkw() ;
            rotateUpClkw() ;
            rotateUpClkw() ;
        }

        void rotateDownClkw(){
            char aux = Down[0][0] ;
            Down[0][0] = Down[1][0] ;
            Down[1][0] = Down[1][1] ;
            Down[1][1] = Down[0][1] ;
            Down[0][1] = aux ;

            //now the rest

            char aux1 = Front[1][0] , aux2 = Front[1][1] ;

            Front[1][0] = Left[1][0] ;
            Front[1][1] = Left[1][1] ;

            Left[1][0] = Back[1][0] ;
            Left[1][1] = Back[1][1] ;

            Back[1][0] = Right[1][0] ;
            Back[1][1] = Right[1][1] ;

            Right[1][0] = aux1 ;
            Right[1][1] = aux2 ;
        }

        void rotateDownAntiClkw(){
            rotateDownClkw() ;
            rotateDownClkw() ;
            rotateDownClkw() ;
        }
};