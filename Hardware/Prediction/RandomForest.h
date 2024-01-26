#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[6] = { 0 };
                        // tree #1
                        if (x[3] <= 67.5) {
                            if (x[3] <= 41.5) {
                                if (x[6] <= 17.570613861083984) {
                                    if (x[4] <= 29.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 40.5) {
                                    if (x[5] <= 30.99391508102417) {
                                        if (x[3] <= 52.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 40.5) {
                                        if (x[5] <= 29.234651565551758) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 69.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 79.5) {
                                if (x[4] <= 67.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -96.58249282836914) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #2
                        if (x[3] <= 42.5) {
                            if (x[3] <= 41.5) {
                                if (x[0] <= 33.5) {
                                    if (x[3] <= 39.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -33.430471420288086) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[4] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 58.0) {
                                if (x[2] <= 69.5) {
                                    if (x[3] <= 51.5) {
                                        if (x[5] <= 32.165467262268066) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 5.977814197540283) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 69.5) {
                                        if (x[0] <= 63.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 64.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #3
                        if (x[3] <= 67.5) {
                            if (x[3] <= 42.5) {
                                if (x[1] <= 14.0) {
                                    if (x[0] <= 35.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -62.09476280212402) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[1] <= 0.5) {
                                        if (x[5] <= 26.782625675201416) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 60.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 80.5) {
                                if (x[5] <= -101.05633163452148) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #4
                        if (x[5] <= 30.68160581588745) {
                            if (x[3] <= 67.5) {
                                if (x[5] <= -63.716623306274414) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[5] <= -28.091113090515137) {
                                        if (x[5] <= -34.56383514404297) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[2] <= 81.5) {
                                        if (x[1] <= 62.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #5
                        if (x[0] <= 45.5) {
                            if (x[2] <= 73.5) {
                                if (x[1] <= 16.5) {
                                    if (x[5] <= 30.708809852600098) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 36.5) {
                                        if (x[5] <= -69.00053215026855) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -69.34284210205078) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 71.5) {
                                    if (x[4] <= 68.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[3] <= 77.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 84.5) {
                                        if (x[1] <= 61.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -7.604045629501343) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -60.538448333740234) {
                                if (x[3] <= 76.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 28.396944046020508) {
                                    if (x[5] <= -36.24699020385742) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #6
                        if (x[1] <= 16.5) {
                            if (x[5] <= 30.974307537078857) {
                                votes[5] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 67.5) {
                                if (x[2] <= 65.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #7
                        if (x[1] <= 42.5) {
                            if (x[5] <= 30.68160581588745) {
                                if (x[3] <= 42.5) {
                                    if (x[5] <= -28.091113090515137) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 44.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[5] <= -112.88192367553711) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[2] <= 78.5) {
                                    if (x[4] <= 63.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 67.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[5] <= 30.68160581588745) {
                            if (x[4] <= 49.5) {
                                if (x[5] <= -63.716623306274414) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[6] <= 10.271186351776123) {
                                        if (x[2] <= 60.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 17.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 90.5) {
                                    if (x[4] <= 71.5) {
                                        if (x[3] <= 69.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 63.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 70.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[6] <= -3.301129460334778) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #9
                        if (x[4] <= 50.5) {
                            if (x[4] <= 40.5) {
                                if (x[1] <= 16.0) {
                                    if (x[3] <= 51.5) {
                                        if (x[1] <= 0.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 29.95631194114685) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 45.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 35.5) {
                                    if (x[1] <= 19.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[3] <= 46.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 42.5) {
                                        if (x[6] <= 3.4732545614242554) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 21.5) {
                                votes[4] += 1;
                            }

                            else {
                                if (x[2] <= 88.5) {
                                    if (x[6] <= 5.234614849090576) {
                                        if (x[3] <= 69.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 70.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[3] <= 92.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[5] <= 30.974307537078857) {
                            if (x[1] <= 68.5) {
                                if (x[5] <= -71.94903945922852) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= 72.0) {
                                        if (x[1] <= 16.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 59.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #11
                        if (x[3] <= 67.5) {
                            if (x[5] <= -63.716623306274414) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[3] <= 42.5) {
                                    if (x[1] <= 14.5) {
                                        if (x[5] <= 21.10848045349121) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 0.5) {
                                        if (x[0] <= 32.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 33.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -96.32538604736328) {
                                votes[3] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #12
                        if (x[4] <= 58.0) {
                            if (x[1] <= 42.5) {
                                if (x[0] <= 41.5) {
                                    if (x[3] <= 42.5) {
                                        if (x[5] <= 18.856178283691406) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 32.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 5.981297492980957) {
                                        if (x[6] <= -2.1717010736465454) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 40.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 83.5) {
                                    if (x[1] <= 70.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 70.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.0) {
                                votes[4] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #13
                        if (x[3] <= 68.0) {
                            if (x[3] <= 42.5) {
                                if (x[1] <= 14.5) {
                                    if (x[1] <= 1.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 69.5) {
                                    if (x[1] <= 0.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 41.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 36.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 21.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 21.5) {
                                votes[4] += 1;
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #14
                        if (x[1] <= 16.5) {
                            if (x[3] <= 50.5) {
                                if (x[5] <= 30.99391508102417) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 33.5) {
                                    if (x[0] <= 55.0) {
                                        if (x[6] <= 7.830033540725708) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 0.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 5.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 45.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[4] <= 49.5) {
                                    if (x[2] <= 82.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 21.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[0] <= 34.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #15
                        if (x[3] <= 68.0) {
                            if (x[3] <= 41.5) {
                                if (x[5] <= -28.091113090515137) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[5] <= 20.200589179992676) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 43.0) {
                                    if (x[3] <= 50.5) {
                                        if (x[5] <= 30.99391508102417) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 29.95631194114685) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -96.32538604736328) {
                                votes[3] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #16
                        if (x[0] <= 45.5) {
                            if (x[3] <= 64.0) {
                                if (x[2] <= 61.5) {
                                    if (x[3] <= 40.5) {
                                        if (x[5] <= 20.074832916259766) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 7.642126083374023) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 22.0) {
                                        if (x[3] <= 52.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 4.053391993045807) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -96.81167984008789) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 41.5) {
                                if (x[6] <= 7.138708591461182) {
                                    if (x[5] <= 21.99092388153076) {
                                        if (x[3] <= 44.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= -38.29574394226074) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -121.513671875) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #17
                        if (x[1] <= 16.5) {
                            if (x[3] <= 51.5) {
                                if (x[4] <= 32.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[6] <= 2.982840418815613) {
                                        if (x[1] <= 1.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= 29.95631194114685) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 42.5) {
                                if (x[0] <= 20.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 68.5) {
                                    if (x[4] <= 64.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #18
                        if (x[4] <= 50.5) {
                            if (x[1] <= 42.5) {
                                if (x[5] <= 30.68160581588745) {
                                    if (x[1] <= 16.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 82.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 21.5) {
                                votes[4] += 1;
                            }

                            else {
                                if (x[1] <= 68.5) {
                                    if (x[2] <= 85.5) {
                                        if (x[5] <= 2.733051300048828) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #19
                        if (x[3] <= 67.5) {
                            if (x[0] <= 41.5) {
                                if (x[5] <= -28.091113090515137) {
                                    if (x[3] <= 42.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 66.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 32.79029417037964) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 69.5) {
                                    if (x[2] <= 61.5) {
                                        if (x[0] <= 49.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 29.2561616897583) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -0.28382110595703125) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[4] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #20
                        if (x[3] <= 68.0) {
                            if (x[1] <= 43.0) {
                                if (x[5] <= 30.974307537078857) {
                                    if (x[3] <= 41.5) {
                                        if (x[4] <= 33.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 24.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 64.0) {
                                votes[4] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #21
                        if (x[2] <= 69.5) {
                            if (x[5] <= 30.68160581588745) {
                                if (x[1] <= 16.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[2] <= 64.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[5] <= -112.88192367553711) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[3] <= 67.5) {
                                    if (x[4] <= 38.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 48.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #22
                        if (x[1] <= 42.5) {
                            if (x[5] <= 30.68160581588745) {
                                if (x[1] <= 17.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[2] <= 72.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 68.5) {
                                if (x[5] <= -71.94903945922852) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[4] <= 62.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #23
                        if (x[2] <= 69.5) {
                            if (x[1] <= 16.5) {
                                if (x[3] <= 51.5) {
                                    if (x[4] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 32.79029417037964) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 0.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 33.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 47.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -113.36821746826172) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[4] <= 64.0) {
                                    if (x[6] <= -0.017468000296503305) {
                                        if (x[5] <= -6.060371398925781) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 39.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #24
                        if (x[3] <= 67.5) {
                            if (x[6] <= 3.7566570043563843) {
                                if (x[3] <= 37.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[6] <= -0.05823650024831295) {
                                        if (x[0] <= 47.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 29.828272104263306) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -28.091113090515137) {
                                    if (x[0] <= 46.5) {
                                        if (x[4] <= 46.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 7.447842121124268) {
                                        if (x[5] <= 29.649794101715088) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[4] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #25
                        if (x[1] <= 16.0) {
                            if (x[1] <= 0.5) {
                                if (x[6] <= 3.9379444122314453) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 66.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 51.5) {
                                    if (x[5] <= 30.64892816543579) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 0.8285510241985321) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -71.82826232910156) {
                                if (x[3] <= 69.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 59.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #26
                        if (x[5] <= 30.68160581588745) {
                            if (x[1] <= 68.5) {
                                if (x[4] <= 64.0) {
                                    if (x[5] <= -63.716623306274414) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[5] <= -27.955565452575684) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #27
                        if (x[4] <= 50.5) {
                            if (x[4] <= 40.5) {
                                if (x[6] <= 3.916196584701538) {
                                    if (x[6] <= -9.210360527038574) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[2] <= 54.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 9.772512435913086) {
                                        if (x[5] <= -28.920377731323242) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 58.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 68.5) {
                                    if (x[6] <= 0.6192650124430656) {
                                        if (x[6] <= -4.051087021827698) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 4.152853488922119) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -1.6380424499511719) {
                                        if (x[2] <= 82.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 68.5) {
                                if (x[3] <= 67.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #28
                        if (x[5] <= 30.974307537078857) {
                            if (x[3] <= 67.5) {
                                if (x[0] <= 41.5) {
                                    if (x[3] <= 42.5) {
                                        if (x[5] <= -28.091113090515137) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 43.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 7.723594903945923) {
                                        if (x[4] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 21.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[5] <= -103.06626510620117) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= -96.58249282836914) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #29
                        if (x[3] <= 68.0) {
                            if (x[1] <= 43.0) {
                                if (x[5] <= 29.996897220611572) {
                                    if (x[2] <= 60.5) {
                                        if (x[1] <= 14.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -30.366039276123047) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[5] <= -97.7869644165039) {
                                votes[3] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #30
                        if (x[1] <= 16.5) {
                            if (x[0] <= 41.5) {
                                if (x[0] <= 30.5) {
                                    if (x[2] <= 61.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 30.46284580230713) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 42.5) {
                                        if (x[3] <= 41.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 0.3360454964567907) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 61.5) {
                                    if (x[0] <= 49.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 28.41845417022705) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 45.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 68.5) {
                                    if (x[4] <= 62.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #31
                        if (x[1] <= 16.5) {
                            if (x[1] <= 0.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[4] <= 32.5) {
                                    if (x[5] <= 22.422846794128418) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 33.5) {
                                        if (x[6] <= 6.613885402679443) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 0.6318255066871643) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 42.5) {
                                if (x[5] <= -60.378244400024414) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[4] <= 59.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 68.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[5] <= -96.81167984008789) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #32
                        if (x[4] <= 50.5) {
                            if (x[3] <= 42.5) {
                                if (x[5] <= -28.091113090515137) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 69.5) {
                                    if (x[0] <= 41.5) {
                                        if (x[6] <= 3.224252462387085) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 25.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= -120.77291107177734) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 68.5) {
                                if (x[3] <= 67.5) {
                                    if (x[1] <= 27.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #33
                        if (x[3] <= 68.0) {
                            if (x[5] <= -63.716623306274414) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[3] <= 42.5) {
                                    if (x[5] <= -28.091113090515137) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 1.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 3.853006601333618) {
                                        if (x[3] <= 50.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -98.27570343017578) {
                                votes[3] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #34
                        if (x[1] <= 68.5) {
                            if (x[1] <= 16.0) {
                                if (x[5] <= 30.68160581588745) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 66.0) {
                                    if (x[2] <= 64.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[6] <= 2.7604704797267914) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 64.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #35
                        if (x[4] <= 49.5) {
                            if (x[1] <= 16.5) {
                                if (x[1] <= 0.5) {
                                    if (x[5] <= 27.018617630004883) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 32.5) {
                                        if (x[2] <= 67.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 42.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 67.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 68.5) {
                                if (x[3] <= 67.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #36
                        if (x[1] <= 16.5) {
                            if (x[5] <= 30.68160581588745) {
                                votes[5] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[5] <= -71.94903945922852) {
                                if (x[1] <= 68.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -51.66745376586914) {
                                    if (x[1] <= 40.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 65.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 60.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #37
                        if (x[4] <= 58.0) {
                            if (x[1] <= 42.5) {
                                if (x[1] <= 16.5) {
                                    if (x[3] <= 51.5) {
                                        if (x[6] <= 3.916196584701538) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 29.95631194114685) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 69.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 64.0) {
                                votes[4] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #38
                        if (x[1] <= 68.5) {
                            if (x[3] <= 67.5) {
                                if (x[4] <= 40.5) {
                                    if (x[6] <= 3.916196584701538) {
                                        if (x[1] <= 1.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 32.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 3.1675034761428833) {
                                        if (x[1] <= 41.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 70.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #39
                        if (x[4] <= 50.5) {
                            if (x[5] <= 30.68160581588745) {
                                if (x[3] <= 42.5) {
                                    if (x[6] <= 13.914445877075195) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 58.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 43.0) {
                                        if (x[4] <= 44.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 68.5) {
                                if (x[3] <= 67.5) {
                                    if (x[5] <= 1.2675819396972656) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #40
                        if (x[5] <= 30.68160581588745) {
                            if (x[1] <= 68.5) {
                                if (x[5] <= -71.94903945922852) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[4] <= 59.0) {
                                        if (x[3] <= 42.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #41
                        if (x[4] <= 50.5) {
                            if (x[1] <= 17.0) {
                                if (x[6] <= 7.447842121124268) {
                                    if (x[3] <= 50.5) {
                                        if (x[1] <= 1.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 45.5) {
                                        if (x[4] <= 31.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 41.5) {
                                    if (x[1] <= 44.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 30.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 9.355094194412231) {
                                        if (x[5] <= -66.40759658813477) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 90.5) {
                                if (x[1] <= 68.5) {
                                    if (x[0] <= 39.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 67.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #42
                        if (x[1] <= 16.5) {
                            if (x[5] <= 28.381577968597412) {
                                votes[5] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 65.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[4] <= 49.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[4] <= 71.5) {
                                        if (x[3] <= 69.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -102.54925155639648) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #43
                        if (x[2] <= 69.5) {
                            if (x[5] <= 30.99391508102417) {
                                if (x[6] <= 12.418691158294678) {
                                    if (x[3] <= 42.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 24.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 59.5) {
                                        if (x[3] <= 43.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 50.5) {
                                if (x[1] <= 24.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 70.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 80.5) {
                                    if (x[1] <= 58.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[5] <= -112.56112289428711) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 90.5) {
                                        if (x[5] <= -95.75478744506836) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 94.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #44
                        if (x[4] <= 50.5) {
                            if (x[1] <= 42.5) {
                                if (x[3] <= 41.5) {
                                    if (x[1] <= 13.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 30.05677890777588) {
                                        if (x[5] <= -42.54682922363281) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 21.5) {
                                votes[4] += 1;
                            }

                            else {
                                if (x[5] <= -107.8301773071289) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[0] <= 42.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[3] <= 60.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #45
                        if (x[1] <= 16.5) {
                            if (x[6] <= 3.7452445030212402) {
                                if (x[6] <= -9.210360527038574) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 29.177073001861572) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 0.5) {
                                    if (x[0] <= 48.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 34.124228954315186) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 68.0) {
                                if (x[5] <= -62.65226745605469) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #46
                        if (x[1] <= 16.0) {
                            if (x[6] <= 2.982840418815613) {
                                if (x[5] <= 29.828272104263306) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 40.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 45.5) {
                                        if (x[5] <= 29.363844394683838) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= -0.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -71.94903945922852) {
                                if (x[1] <= 68.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -51.66745376586914) {
                                    if (x[4] <= 62.0) {
                                        if (x[5] <= -63.716623306274414) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 44.0) {
                                        if (x[3] <= 62.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #47
                        if (x[1] <= 16.5) {
                            if (x[5] <= 30.68160581588745) {
                                votes[5] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 67.5) {
                                if (x[1] <= 43.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 21.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[0] <= 38.5) {
                                        if (x[1] <= 65.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #48
                        if (x[4] <= 49.5) {
                            if (x[1] <= 17.0) {
                                if (x[0] <= 41.0) {
                                    if (x[1] <= 1.5) {
                                        if (x[5] <= 30.31685471534729) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 69.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 61.5) {
                                        if (x[4] <= 42.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 28.41845417022705) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 64.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 42.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 82.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -107.42053985595703) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[3] <= 67.5) {
                                    if (x[5] <= -1.6380424499511719) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #49
                        if (x[0] <= 41.5) {
                            if (x[2] <= 73.5) {
                                if (x[1] <= 16.5) {
                                    if (x[4] <= 32.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[6] <= 3.332014560699463) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 44.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 71.5) {
                                    if (x[5] <= -92.33662796020508) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 65.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 42.5) {
                                if (x[2] <= 61.5) {
                                    if (x[1] <= 20.0) {
                                        if (x[5] <= 29.946438789367676) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 49.5) {
                                        if (x[1] <= 22.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 55.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -118.66780090332031) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #50
                        if (x[2] <= 69.5) {
                            if (x[1] <= 16.5) {
                                if (x[1] <= 0.5) {
                                    if (x[5] <= 27.018617630004883) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 31.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[6] <= 0.6318255066871643) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 47.5) {
                                    if (x[1] <= 45.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 68.5) {
                                if (x[2] <= 78.0) {
                                    if (x[0] <= 62.0) {
                                        if (x[2] <= 74.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 67.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #51
                        if (x[5] <= -71.94903945922852) {
                            if (x[1] <= 68.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 73.0) {
                                if (x[1] <= 16.5) {
                                    if (x[6] <= 5.977814197540283) {
                                        if (x[1] <= 1.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 45.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -69.57094955444336) {
                                    if (x[1] <= 53.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #52
                        if (x[3] <= 67.5) {
                            if (x[1] <= 43.5) {
                                if (x[5] <= 29.996897220611572) {
                                    if (x[6] <= 9.772512435913086) {
                                        if (x[1] <= 16.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -30.78469467163086) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[4] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #53
                        if (x[5] <= 30.974307537078857) {
                            if (x[2] <= 68.5) {
                                if (x[0] <= 28.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 16.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[3] <= 46.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 77.5) {
                                    if (x[5] <= -66.9741096496582) {
                                        if (x[1] <= 70.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -34.44467735290527) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 68.5) {
                                        if (x[2] <= 82.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #54
                        if (x[2] <= 69.5) {
                            if (x[1] <= 17.0) {
                                if (x[4] <= 33.5) {
                                    if (x[6] <= 8.773622035980225) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 1.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 41.5) {
                                        if (x[1] <= 0.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 46.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 78.5) {
                                if (x[4] <= 38.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[4] <= 60.5) {
                                        if (x[4] <= 51.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 59.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -107.65961074829102) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[3] <= 68.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #55
                        if (x[5] <= 30.68160581588745) {
                            if (x[1] <= 68.5) {
                                if (x[3] <= 67.5) {
                                    if (x[1] <= 43.0) {
                                        if (x[2] <= 60.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #56
                        if (x[1] <= 68.5) {
                            if (x[1] <= 16.5) {
                                if (x[5] <= 30.68160581588745) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 67.5) {
                                    if (x[3] <= 45.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #57
                        if (x[5] <= 30.68160581588745) {
                            if (x[1] <= 68.5) {
                                if (x[5] <= -71.94903945922852) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[5] <= -28.091113090515137) {
                                        if (x[3] <= 65.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 70.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #58
                        if (x[5] <= 30.974307537078857) {
                            if (x[0] <= 45.5) {
                                if (x[5] <= -105.39608764648438) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[4] <= 61.0) {
                                        if (x[1] <= 16.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 76.5) {
                                    if (x[5] <= -46.914048194885254) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #59
                        if (x[1] <= 42.5) {
                            if (x[1] <= 17.0) {
                                if (x[6] <= 3.80843448638916) {
                                    if (x[0] <= 38.5) {
                                        if (x[4] <= 38.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 50.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 40.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[5] <= 33.398935079574585) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 20.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 50.5) {
                                if (x[3] <= 69.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 71.5) {
                                    if (x[3] <= 69.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 65.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #60
                        if (x[2] <= 69.5) {
                            if (x[3] <= 42.5) {
                                if (x[3] <= 39.5) {
                                    if (x[4] <= 30.0) {
                                        if (x[1] <= 13.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= -34.081501960754395) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[5] <= 20.200589179992676) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= 30.05677890777588) {
                                    if (x[1] <= 24.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[1] <= 45.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 57.5) {
                                if (x[1] <= 70.5) {
                                    if (x[1] <= 25.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -96.32538604736328) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #61
                        if (x[4] <= 50.5) {
                            if (x[5] <= 30.249013662338257) {
                                if (x[5] <= -63.716623306274414) {
                                    if (x[1] <= 69.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 40.5) {
                                        if (x[3] <= 41.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 19.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[5] <= -109.29175567626953) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[1] <= 59.5) {
                                    if (x[4] <= 62.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #62
                        if (x[5] <= 30.68160581588745) {
                            if (x[1] <= 68.5) {
                                if (x[4] <= 62.5) {
                                    if (x[3] <= 42.5) {
                                        if (x[4] <= 34.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -60.38692092895508) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #63
                        if (x[0] <= 44.5) {
                            if (x[3] <= 42.5) {
                                if (x[2] <= 59.5) {
                                    if (x[3] <= 40.5) {
                                        if (x[5] <= 24.355060577392578) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 19.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 34.0) {
                                        if (x[5] <= 12.918611526489258) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 21.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[5] <= -109.10166931152344) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[3] <= 68.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= 28.41845417022705) {
                                if (x[5] <= -62.587202072143555) {
                                    if (x[1] <= 70.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 43.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #64
                        if (x[5] <= 30.68160581588745) {
                            if (x[3] <= 67.5) {
                                if (x[5] <= -63.716623306274414) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[5] <= -29.666044235229492) {
                                        if (x[1] <= 14.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 71.5) {
                                    if (x[5] <= -91.85033416748047) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= -104.23002243041992) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #65
                        if (x[1] <= 16.0) {
                            if (x[1] <= 0.5) {
                                if (x[5] <= 27.018617630004883) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 30.68160581588745) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 68.5) {
                                if (x[3] <= 45.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[4] <= 62.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #66
                        if (x[3] <= 67.5) {
                            if (x[1] <= 42.5) {
                                if (x[5] <= 30.249013662338257) {
                                    if (x[0] <= 29.5) {
                                        if (x[0] <= 28.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 42.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 21.5) {
                                votes[4] += 1;
                            }

                            else {
                                if (x[5] <= -96.09619903564453) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #67
                        if (x[2] <= 69.5) {
                            if (x[1] <= 17.0) {
                                if (x[6] <= 5.977814197540283) {
                                    if (x[3] <= 50.5) {
                                        if (x[6] <= -1.344272494316101) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 3.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 0.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[6] <= 12.889631748199463) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -70.17199897766113) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 67.5) {
                                if (x[5] <= -1.6380424499511719) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 71.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 65.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #68
                        if (x[3] <= 68.5) {
                            if (x[1] <= 42.5) {
                                if (x[3] <= 42.5) {
                                    if (x[6] <= -0.07157798111438751) {
                                        if (x[3] <= 39.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 17.570613861083984) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 51.5) {
                                        if (x[2] <= 58.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[5] <= -96.58249282836914) {
                                votes[3] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #69
                        if (x[3] <= 67.5) {
                            if (x[2] <= 69.5) {
                                if (x[5] <= 30.68160581588745) {
                                    if (x[3] <= 42.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[4] <= 41.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 24.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 71.5) {
                                if (x[1] <= 57.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 65.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #70
                        if (x[2] <= 78.5) {
                            if (x[5] <= 30.974307537078857) {
                                if (x[1] <= 43.5) {
                                    if (x[1] <= 16.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[1] <= 42.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 63.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 60.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 21.5) {
                                votes[4] += 1;
                            }

                            else {
                                if (x[5] <= -107.65961074829102) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 59.5) {
                                        if (x[0] <= 44.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #71
                        if (x[5] <= 30.68160581588745) {
                            if (x[1] <= 69.0) {
                                if (x[3] <= 67.5) {
                                    if (x[3] <= 42.5) {
                                        if (x[6] <= 17.2718563079834) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 40.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #72
                        if (x[1] <= 68.5) {
                            if (x[3] <= 68.0) {
                                if (x[1] <= 42.5) {
                                    if (x[3] <= 42.5) {
                                        if (x[1] <= 14.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #73
                        if (x[3] <= 41.5) {
                            if (x[1] <= 14.0) {
                                if (x[5] <= 21.777581214904785) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[5] <= 30.68160581588745) {
                                if (x[3] <= 68.5) {
                                    if (x[4] <= 40.5) {
                                        if (x[2] <= 69.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 68.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #74
                        if (x[1] <= 17.0) {
                            if (x[4] <= 32.5) {
                                if (x[1] <= 1.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[6] <= 6.341202735900879) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 0.5) {
                                    if (x[5] <= 27.018617630004883) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 1.053930014371872) {
                                        if (x[5] <= 26.151038646697998) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 44.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 45.5) {
                                if (x[1] <= 42.5) {
                                    if (x[3] <= 59.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 73.5) {
                                        if (x[3] <= 76.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -102.34592056274414) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 71.5) {
                                    if (x[1] <= 41.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #75
                        if (x[2] <= 69.5) {
                            if (x[5] <= 30.68160581588745) {
                                if (x[3] <= 42.5) {
                                    if (x[6] <= 13.78283166885376) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 55.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 44.0) {
                                        if (x[5] <= -56.10884475708008) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 45.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 50.5) {
                                if (x[3] <= 58.5) {
                                    if (x[4] <= 38.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 47.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= -3.1747028961544856) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 79.5) {
                                    if (x[5] <= -71.94903945922852) {
                                        if (x[3] <= 69.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 39.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #76
                        if (x[5] <= 30.68160581588745) {
                            if (x[1] <= 41.5) {
                                if (x[5] <= -29.82528018951416) {
                                    if (x[2] <= 72.0) {
                                        if (x[6] <= 21.00230312347412) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 22.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 49.5) {
                                    if (x[5] <= -55.306936264038086) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 71.5) {
                                        if (x[0] <= 45.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 64.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #77
                        if (x[3] <= 67.5) {
                            if (x[4] <= 40.5) {
                                if (x[1] <= 16.0) {
                                    if (x[4] <= 33.5) {
                                        if (x[5] <= 28.082602500915527) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 51.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 44.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 43.0) {
                                    if (x[0] <= 46.5) {
                                        if (x[2] <= 62.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -96.32538604736328) {
                                votes[3] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #78
                        if (x[2] <= 69.5) {
                            if (x[2] <= 59.5) {
                                if (x[5] <= -28.091113090515137) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[5] <= 27.748528480529785) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[6] <= 7.501178026199341) {
                                    if (x[1] <= 1.5) {
                                        if (x[0] <= 34.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 4.53055739402771) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 13.343475341796875) {
                                        if (x[1] <= 23.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 68.5) {
                                if (x[4] <= 62.5) {
                                    if (x[5] <= -1.6380424499511719) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #79
                        if (x[2] <= 69.5) {
                            if (x[6] <= 0.7853924930095673) {
                                if (x[2] <= 56.5) {
                                    if (x[1] <= 16.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 26.635831356048584) {
                                        if (x[0] <= 35.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 41.5) {
                                    if (x[1] <= 14.0) {
                                        if (x[4] <= 31.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 30.708809852600098) {
                                        if (x[2] <= 68.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -112.88192367553711) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[4] <= 62.5) {
                                    if (x[2] <= 71.5) {
                                        if (x[1] <= 26.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #80
                        if (x[3] <= 67.5) {
                            if (x[2] <= 69.5) {
                                if (x[5] <= 30.68160581588745) {
                                    if (x[3] <= 42.5) {
                                        if (x[5] <= -28.091113090515137) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 24.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 0.22259140014648438) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 21.5) {
                                votes[4] += 1;
                            }

                            else {
                                if (x[1] <= 64.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #81
                        if (x[1] <= 16.0) {
                            if (x[3] <= 51.5) {
                                if (x[5] <= 30.369088172912598) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 29.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[5] <= 29.645504236221313) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 42.5) {
                                if (x[5] <= -27.604010581970215) {
                                    if (x[1] <= 40.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= 59.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -112.88192367553711) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[0] <= 36.5) {
                                        if (x[5] <= -77.71105575561523) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #82
                        if (x[5] <= 30.974307537078857) {
                            if (x[5] <= -71.94903945922852) {
                                if (x[1] <= 68.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 64.5) {
                                    if (x[2] <= 62.5) {
                                        if (x[6] <= 13.263811111450195) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 42.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #83
                        if (x[2] <= 69.5) {
                            if (x[1] <= 16.5) {
                                if (x[5] <= 30.974307537078857) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -70.18160438537598) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 50.5) {
                                if (x[1] <= 24.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[6] <= -6.623511552810669) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 30.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 71.5) {
                                    if (x[3] <= 73.5) {
                                        if (x[3] <= 68.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 84.5) {
                                        if (x[5] <= -104.36811828613281) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 91.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #84
                        if (x[5] <= 30.68160581588745) {
                            if (x[2] <= 68.5) {
                                if (x[5] <= -31.135221481323242) {
                                    if (x[3] <= 47.5) {
                                        if (x[6] <= 20.703545570373535) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 20.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 68.5) {
                                    if (x[4] <= 62.0) {
                                        if (x[1] <= 26.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #85
                        if (x[4] <= 50.5) {
                            if (x[2] <= 69.5) {
                                if (x[5] <= 30.05677890777588) {
                                    if (x[1] <= 16.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[2] <= 64.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 25.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[5] <= -122.06298065185547) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 69.0) {
                                if (x[0] <= 42.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #86
                        if (x[3] <= 68.5) {
                            if (x[5] <= -63.716623306274414) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[1] <= 16.5) {
                                    if (x[5] <= 30.974307537078857) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -96.32538604736328) {
                                votes[3] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #87
                        if (x[2] <= 69.5) {
                            if (x[3] <= 42.5) {
                                if (x[1] <= 14.0) {
                                    if (x[6] <= 13.115111827850342) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 30.05677890777588) {
                                    if (x[1] <= 24.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[0] <= 45.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 68.0) {
                                if (x[4] <= 37.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 22.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -96.46876525878906) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #88
                        if (x[1] <= 16.5) {
                            if (x[0] <= 41.0) {
                                if (x[5] <= 30.369088172912598) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 61.5) {
                                    if (x[1] <= 0.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 8.585367202758789) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 42.5) {
                                if (x[2] <= 72.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 68.5) {
                                    if (x[5] <= -71.94903945922852) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 53.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        // tree #89
                        if (x[3] <= 68.0) {
                            if (x[3] <= 42.5) {
                                if (x[5] <= -28.091113090515137) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[5] <= 20.76875877380371) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= 30.05677890777588) {
                                    if (x[6] <= 7.669687986373901) {
                                        if (x[3] <= 50.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 43.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 71.5) {
                                if (x[5] <= -92.33662796020508) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 29.5) {
                                    if (x[6] <= -7.588229417800903) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 27.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -101.77532196044922) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #90
                        if (x[5] <= 30.974307537078857) {
                            if (x[1] <= 41.5) {
                                if (x[2] <= 60.5) {
                                    if (x[5] <= -27.285038948059082) {
                                        if (x[1] <= 14.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 6.6856396198272705) {
                                        if (x[3] <= 43.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 21.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 68.5) {
                                    if (x[3] <= 68.0) {
                                        if (x[0] <= 43.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #91
                        if (x[3] <= 67.0) {
                            if (x[3] <= 42.5) {
                                if (x[1] <= 14.5) {
                                    if (x[1] <= 1.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 70.5) {
                                    if (x[6] <= 6.427433967590332) {
                                        if (x[4] <= 40.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 64.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 39.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 73.5) {
                                if (x[5] <= -96.20460891723633) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 86.5) {
                                    if (x[5] <= -102.34592056274414) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 67.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        // tree #92
                        if (x[5] <= 30.68160581588745) {
                            if (x[3] <= 68.0) {
                                if (x[3] <= 42.5) {
                                    if (x[6] <= 13.78283166885376) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 58.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -60.62929344177246) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 24.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -96.32538604736328) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #93
                        if (x[3] <= 67.5) {
                            if (x[4] <= 41.5) {
                                if (x[1] <= 16.5) {
                                    if (x[1] <= 0.5) {
                                        if (x[6] <= 11.162707328796387) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 68.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 64.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 42.5) {
                                    if (x[3] <= 43.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -96.81167984008789) {
                                votes[3] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #94
                        if (x[1] <= 68.5) {
                            if (x[4] <= 64.0) {
                                if (x[1] <= 42.5) {
                                    if (x[1] <= 17.0) {
                                        if (x[3] <= 51.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #95
                        if (x[2] <= 69.5) {
                            if (x[1] <= 17.0) {
                                if (x[6] <= 3.80843448638916) {
                                    if (x[6] <= -2.1717010736465454) {
                                        if (x[1] <= 1.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 29.828272104263306) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 60.5) {
                                        if (x[1] <= -1.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 44.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 58.0) {
                                if (x[1] <= 70.0) {
                                    if (x[5] <= -1.6380424499511719) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -97.7869644165039) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #96
                        if (x[5] <= 30.974307537078857) {
                            if (x[1] <= 68.5) {
                                if (x[3] <= 42.5) {
                                    if (x[4] <= 34.5) {
                                        if (x[5] <= -29.366835594177246) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 68.5) {
                                        if (x[1] <= 43.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #97
                        if (x[2] <= 69.5) {
                            if (x[2] <= 59.5) {
                                if (x[3] <= 40.5) {
                                    if (x[5] <= 24.355060577392578) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 3.063076540827751) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 19.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= 30.05677890777588) {
                                    if (x[3] <= 43.5) {
                                        if (x[1] <= 18.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 41.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -113.36821746826172) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[4] <= 62.5) {
                                    if (x[1] <= 24.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #98
                        if (x[5] <= 30.68160581588745) {
                            if (x[3] <= 42.5) {
                                if (x[4] <= 33.5) {
                                    if (x[3] <= 40.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 77.5) {
                                    if (x[1] <= 24.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[1] <= 70.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -71.94903945922852) {
                                        if (x[0] <= 60.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #99
                        if (x[3] <= 67.5) {
                            if (x[1] <= 42.5) {
                                if (x[5] <= 30.05677890777588) {
                                    if (x[3] <= 42.5) {
                                        if (x[6] <= 17.570613861083984) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 24.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 64.5) {
                                votes[4] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #100
                        if (x[5] <= 30.349480628967285) {
                            if (x[1] <= 68.5) {
                                if (x[4] <= 64.0) {
                                    if (x[1] <= 42.5) {
                                        if (x[5] <= -27.503729820251465) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 6; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "C";
                            case 1:
                            return "D";
                            case 2:
                            return "O";
                            case 3:
                            return "S";
                            case 4:
                            return "T";
                            case 5:
                            return "Z";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }