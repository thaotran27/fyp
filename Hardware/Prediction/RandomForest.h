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
                        uint8_t votes[26] = { 0 };
                        // tree #1
                        if (x[0] <= 91.5) {
                            if (x[3] <= 37.5) {
                                if (x[0] <= 18.5) {
                                    if (x[4] <= 19.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[0] <= 5.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -46.699106216430664) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[0] <= 69.0) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 42.5) {
                                    if (x[5] <= 3.3263931274414062) {
                                        if (x[0] <= 13.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -31.492183730006218) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 61.5) {
                                        if (x[5] <= 68.34228134155273) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 71.5) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #2
                        if (x[3] <= 37.5) {
                            if (x[3] <= 30.5) {
                                if (x[0] <= 69.0) {
                                    if (x[1] <= 39.0) {
                                        if (x[5] <= 33.940730810165405) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
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
                                if (x[4] <= 28.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[6] <= -43.042314529418945) {
                                if (x[2] <= 56.0) {
                                    votes[7] += 1;
                                }

                                else {
                                    if (x[0] <= 17.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -47.72247886657715) {
                                    if (x[2] <= 72.5) {
                                        if (x[6] <= -0.9462985023856163) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -3.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 18.5) {
                                        if (x[4] <= 42.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -26.668734550476074) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[3] <= 13.0) {
                            if (x[6] <= 14.157316207885742) {
                                if (x[1] <= 22.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 32.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[22] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -48.39366340637207) {
                                if (x[2] <= 70.5) {
                                    if (x[3] <= 44.5) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[0] <= 82.5) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 17.068546295166016) {
                                        if (x[5] <= -90.5567741394043) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 33.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 48.5) {
                                    if (x[3] <= 33.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[5] <= 114.41952514648438) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 13.0) {
                                        if (x[1] <= 1.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 27.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[4] <= 42.5) {
                            if (x[3] <= 13.0) {
                                if (x[5] <= 27.55722141265869) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 17.0) {
                                    if (x[5] <= -103.27637481689453) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        if (x[6] <= 6.921834468841553) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 30.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 27.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 22.5) {
                                if (x[6] <= -62.66616630554199) {
                                    votes[7] += 1;
                                }

                                else {
                                    if (x[6] <= 13.517296314239502) {
                                        if (x[0] <= -6.0) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 25.43707275390625) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 83.0) {
                                    if (x[1] <= 31.0) {
                                        if (x[5] <= -80.92432594299316) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -59.77986526489258) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #5
                        if (x[0] <= 91.5) {
                            if (x[4] <= 44.0) {
                                if (x[1] <= 71.5) {
                                    if (x[5] <= -44.0491828918457) {
                                        if (x[6] <= -31.287452220916748) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 28.676837682724) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -60.81543159484863) {
                                        if (x[3] <= 56.0) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 11.5) {
                                    if (x[3] <= 29.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[2] <= 8.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 31.0) {
                                        if (x[6] <= -44.1724739074707) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -59.77986526489258) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #6
                        if (x[4] <= 42.5) {
                            if (x[5] <= -44.0491828918457) {
                                if (x[2] <= 67.5) {
                                    votes[14] += 1;
                                }

                                else {
                                    if (x[0] <= 13.0) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        if (x[4] <= 5.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 39.5) {
                                    if (x[2] <= 26.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 33.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 57.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[6] <= -44.829002380371094) {
                                if (x[4] <= 63.5) {
                                    if (x[1] <= 23.5) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 21.5) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 83.0) {
                                    if (x[3] <= 27.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[5] <= 58.25058555603027) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #7
                        if (x[1] <= 22.5) {
                            if (x[6] <= -45.951863288879395) {
                                votes[7] += 1;
                            }

                            else {
                                if (x[4] <= 15.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        if (x[6] <= 10.857345581054688) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 32.0) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= -8.5) {
                                if (x[2] <= 78.5) {
                                    if (x[4] <= 19.5) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        if (x[3] <= 47.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= -10.5) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        if (x[2] <= 82.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 24.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[0] <= 85.0) {
                                        if (x[3] <= 43.0) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[0] <= 91.0) {
                            if (x[4] <= 44.0) {
                                if (x[2] <= 26.5) {
                                    if (x[6] <= 14.157316207885742) {
                                        if (x[6] <= 11.829108238220215) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 73.5) {
                                        if (x[2] <= 67.5) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 10.007854223251343) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[6] <= -45.53114414215088) {
                                    if (x[1] <= 23.0) {
                                        if (x[4] <= 67.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= -3.5) {
                                        if (x[1] <= 15.5) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #9
                        if (x[4] <= 42.5) {
                            if (x[4] <= 18.0) {
                                if (x[3] <= 25.0) {
                                    if (x[2] <= 7.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[1] <= 24.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 13.5) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        if (x[0] <= 47.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 15.5) {
                                    if (x[1] <= 17.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 22.5) {
                                if (x[1] <= 13.0) {
                                    if (x[0] <= 2.5) {
                                        votes[11] += 1;
                                    }

                                    else {
                                        if (x[2] <= 34.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 59.5) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[6] <= -31.23747706413269) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 83.0) {
                                    if (x[6] <= -37.95100688934326) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[0] <= -3.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #10
                        if (x[2] <= 27.5) {
                            if (x[1] <= 24.0) {
                                if (x[2] <= 17.5) {
                                    if (x[2] <= 7.5) {
                                        if (x[1] <= -3.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 29.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 57.0) {
                                        votes[17] += 1;
                                    }

                                    else {
                                        votes[20] += 1;
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 49.5) {
                                if (x[1] <= 25.0) {
                                    if (x[1] <= 10.0) {
                                        votes[10] += 1;
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 42.0) {
                                    if (x[0] <= -6.5) {
                                        if (x[1] <= 54.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 15.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 85.0) {
                                        if (x[1] <= 49.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #11
                        if (x[3] <= 37.5) {
                            if (x[5] <= -50.138742446899414) {
                                votes[14] += 1;
                            }

                            else {
                                if (x[3] <= 13.0) {
                                    if (x[1] <= 22.5) {
                                        if (x[0] <= 68.0) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 15.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[4] <= 36.5) {
                                    if (x[2] <= 66.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[0] <= 13.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 22.5) {
                                        if (x[5] <= 29.72464084625244) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 61.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #12
                        if (x[4] <= 42.5) {
                            if (x[3] <= 12.5) {
                                if (x[0] <= 47.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 37.5) {
                                    if (x[0] <= 14.0) {
                                        if (x[3] <= 33.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 48.5) {
                                        if (x[6] <= -35.932544231414795) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 13.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 44.0) {
                                if (x[1] <= 11.5) {
                                    if (x[3] <= 26.5) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[1] <= 1.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[7] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 16.0) {
                                    if (x[4] <= 66.5) {
                                        if (x[3] <= 61.0) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 13.688369750976562) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 56.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[0] <= 5.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #13
                        if (x[3] <= 37.5) {
                            if (x[3] <= 30.5) {
                                if (x[1] <= 39.5) {
                                    if (x[1] <= 16.0) {
                                        if (x[4] <= 26.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 24.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 48.0) {
                                if (x[0] <= 27.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 57.5) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 83.0) {
                                    if (x[1] <= 1.5) {
                                        if (x[6] <= 9.555039882659912) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 5.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #14
                        if (x[3] <= 37.5) {
                            if (x[3] <= 30.5) {
                                if (x[5] <= 33.94037675857544) {
                                    if (x[2] <= 24.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 69.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 61.5) {
                                    votes[14] += 1;
                                }

                                else {
                                    if (x[1] <= 26.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 46.5) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[6] <= -43.51336479187012) {
                                    if (x[4] <= 30.0) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        if (x[2] <= 59.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 82.5) {
                                        if (x[0] <= -3.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #15
                        if (x[3] <= 12.0) {
                            if (x[0] <= 32.5) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[6] <= 14.184071063995361) {
                                    if (x[4] <= 29.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    votes[22] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 22.5) {
                                if (x[3] <= 50.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[5] <= -71.74028396606445) {
                                        if (x[0] <= 3.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 31.14065647125244) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 42.5) {
                                    if (x[1] <= 72.5) {
                                        if (x[2] <= 53.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 88.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 72.5) {
                                        if (x[0] <= 83.0) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 17.009075164794922) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #16
                        if (x[0] <= 91.0) {
                            if (x[3] <= 37.5) {
                                if (x[2] <= 53.5) {
                                    if (x[2] <= 26.5) {
                                        if (x[5] <= 23.06601619720459) {
                                            votes[5] += 1;
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
                                    if (x[4] <= 26.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[1] <= 41.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 48.5) {
                                    if (x[0] <= 27.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[3] <= 42.5) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 22.5) {
                                        if (x[6] <= -45.951863288879395) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -47.83241271972656) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #17
                        if (x[1] <= 37.5) {
                            if (x[3] <= 33.0) {
                                if (x[3] <= 11.5) {
                                    if (x[6] <= 12.285329341888428) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= -1.0) {
                                            votes[22] += 1;
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
                                if (x[5] <= -85.63428115844727) {
                                    if (x[1] <= 15.5) {
                                        votes[15] += 1;
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 42.0) {
                                        if (x[1] <= 18.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 62.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 32.5) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[5] <= -47.72247886657715) {
                                    if (x[3] <= 43.0) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[4] <= 57.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 26.5) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        if (x[5] <= 76.70492422580719) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[0] <= 91.0) {
                            if (x[3] <= 12.0) {
                                if (x[5] <= 20.058785438537598) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[4] <= 28.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 37.5) {
                                    if (x[0] <= 14.0) {
                                        if (x[1] <= 15.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 44.0) {
                                        if (x[6] <= -41.76664447784424) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 5.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #19
                        if (x[3] <= 37.5) {
                            if (x[0] <= 19.5) {
                                if (x[2] <= 24.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[3] <= 32.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 34.5) {
                                    if (x[4] <= 28.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 85.0) {
                                if (x[2] <= 44.0) {
                                    if (x[2] <= 27.5) {
                                        if (x[0] <= 47.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 29.037120819091797) {
                                        if (x[1] <= 72.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -4.5) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #20
                        if (x[3] <= 12.0) {
                            if (x[1] <= 22.0) {
                                if (x[4] <= 26.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[22] += 1;
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[0] <= 15.0) {
                                    if (x[1] <= 15.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }

                            else {
                                if (x[6] <= -43.516194343566895) {
                                    if (x[4] <= 30.0) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        if (x[3] <= 64.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 64.0) {
                                        if (x[0] <= -3.0) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -4.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #21
                        if (x[2] <= 27.5) {
                            if (x[5] <= 21.230813026428223) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[1] <= 3.5) {
                                    if (x[2] <= 17.5) {
                                        if (x[2] <= 7.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[20] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 74.0) {
                                        votes[17] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 42.5) {
                                if (x[4] <= 17.0) {
                                    if (x[6] <= 7.315959453582764) {
                                        if (x[1] <= 71.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 15.0) {
                                        if (x[2] <= 52.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 44.0) {
                                    votes[7] += 1;
                                }

                                else {
                                    if (x[1] <= 50.5) {
                                        if (x[0] <= 35.0) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -75.9639778137207) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #22
                        if (x[2] <= 27.5) {
                            if (x[5] <= 21.230813026428223) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[6] <= 11.908490657806396) {
                                    if (x[2] <= 17.5) {
                                        if (x[1] <= 3.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 18.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 5.5) {
                                        if (x[0] <= 48.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 26.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[2] <= 53.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[3] <= 29.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[5] <= 0.8632678985595703) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 83.0) {
                                    if (x[4] <= 43.5) {
                                        if (x[0] <= -4.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -65.10588836669922) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #23
                        if (x[0] <= 91.0) {
                            if (x[4] <= 44.0) {
                                if (x[3] <= 12.0) {
                                    if (x[0] <= 47.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 28.676483631134033) {
                                        if (x[3] <= 43.0) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 16.0) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 26.5) {
                                    votes[22] += 1;
                                }

                                else {
                                    if (x[5] <= -64.57884216308594) {
                                        if (x[6] <= -6.369335651397705) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -41.11766338348389) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #24
                        if (x[3] <= 12.0) {
                            if (x[0] <= 32.0) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[6] <= 14.184071063995361) {
                                    if (x[6] <= 12.296683311462402) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[6] <= 13.456734657287598) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[22] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[5] <= -44.73910331726074) {
                                    votes[14] += 1;
                                }

                                else {
                                    if (x[0] <= 6.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 40.5) {
                                    if (x[0] <= -4.5) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        if (x[0] <= 23.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 44.0) {
                                        if (x[5] <= 43.07951259613037) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -45.53114414215088) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #25
                        if (x[4] <= 42.5) {
                            if (x[3] <= 12.0) {
                                if (x[6] <= 14.157316207885742) {
                                    if (x[4] <= 8.0) {
                                        if (x[1] <= 23.5) {
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

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 30.117114067077637) {
                                    if (x[4] <= 18.5) {
                                        if (x[0] <= 14.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 30.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 15.5) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 44.0) {
                                if (x[1] <= 11.5) {
                                    if (x[3] <= 28.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[4] <= 71.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[7] += 1;
                                }
                            }

                            else {
                                if (x[6] <= 15.554383277893066) {
                                    if (x[2] <= 64.5) {
                                        if (x[5] <= 5.837650299072266) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -37.95100688934326) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 57.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[3] <= 62.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #26
                        if (x[5] <= -47.83241271972656) {
                            if (x[1] <= 16.0) {
                                votes[15] += 1;
                            }

                            else {
                                if (x[4] <= 42.0) {
                                    if (x[4] <= 18.5) {
                                        if (x[5] <= -103.27637481689453) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 56.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[0] <= 44.0) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 18.0) {
                                if (x[0] <= 27.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[1] <= 31.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 59.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 44.0) {
                                    if (x[1] <= 17.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 2.0) {
                                        if (x[6] <= -33.27665162086487) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 18.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #27
                        if (x[4] <= 42.5) {
                            if (x[4] <= 18.0) {
                                if (x[6] <= 11.326514720916748) {
                                    if (x[6] <= -35.2481951713562) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        if (x[2] <= 44.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 32.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[5] <= 13.426776885986328) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 37.5) {
                                    if (x[2] <= 53.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 54.5) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 36.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[6] <= -44.829002380371094) {
                                    if (x[2] <= 59.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 11.5) {
                                        if (x[3] <= 29.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 15.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #28
                        if (x[2] <= 27.5) {
                            if (x[0] <= 26.0) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[0] <= 70.5) {
                                    if (x[3] <= 28.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[6] <= 11.674262523651123) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 42.5) {
                                if (x[3] <= 37.5) {
                                    if (x[0] <= 14.0) {
                                        if (x[1] <= 15.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 66.0) {
                                        if (x[5] <= -5.0795135498046875) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 73.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 84.5) {
                                    if (x[6] <= -44.829002380371094) {
                                        if (x[2] <= 59.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #29
                        if (x[3] <= 30.5) {
                            if (x[1] <= 39.5) {
                                if (x[5] <= 34.606261253356934) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[4] <= 28.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[6] <= -43.042314529418945) {
                                if (x[5] <= -88.78094482421875) {
                                    votes[9] += 1;
                                }

                                else {
                                    if (x[4] <= 63.5) {
                                        if (x[2] <= 58.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -6.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 42.0) {
                                    if (x[3] <= 37.5) {
                                        if (x[1] <= 24.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 18.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 34.5) {
                                        if (x[2] <= 8.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -7.360939979553223) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #30
                        if (x[3] <= 37.5) {
                            if (x[2] <= 53.5) {
                                if (x[3] <= 12.5) {
                                    if (x[0] <= 33.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[5] <= 74.65252304077148) {
                                            votes[22] += 1;
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
                                if (x[0] <= 14.0) {
                                    if (x[0] <= 2.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 48.5) {
                                if (x[2] <= 70.5) {
                                    if (x[0] <= 27.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    votes[9] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 22.5) {
                                    if (x[2] <= 8.0) {
                                        votes[21] += 1;
                                    }

                                    else {
                                        if (x[1] <= 13.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 56.5) {
                                        if (x[4] <= 27.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -64.57884216308594) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #31
                        if (x[1] <= 22.5) {
                            if (x[4] <= 42.0) {
                                if (x[4] <= 16.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 5.0) {
                                    if (x[3] <= 61.5) {
                                        if (x[2] <= 59.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -33.682146072387695) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2.5) {
                                        if (x[5] <= 62.09319496154785) {
                                            votes[10] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -64.28340339660645) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 12.0) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[4] <= 42.5) {
                                    if (x[4] <= 18.5) {
                                        if (x[0] <= 13.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 30.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 83.0) {
                                        if (x[3] <= 61.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #32
                        if (x[4] <= 42.0) {
                            if (x[3] <= 12.0) {
                                if (x[5] <= 26.049267768859863) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 16.5) {
                                    if (x[2] <= 68.5) {
                                        if (x[0] <= -1.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[24] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 67.5) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[4] <= 5.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 49.5) {
                                if (x[5] <= -82.27798843383789) {
                                    if (x[1] <= 16.0) {
                                        votes[15] += 1;
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 44.0) {
                                        if (x[0] <= 14.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 61.5) {
                                    if (x[0] <= 85.0) {
                                        votes[12] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 73.5) {
                                        if (x[1] <= 63.5) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 70.5) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #33
                        if (x[3] <= 37.5) {
                            if (x[5] <= -49.49480628967285) {
                                votes[14] += 1;
                            }

                            else {
                                if (x[0] <= 32.5) {
                                    if (x[0] <= 1.0) {
                                        if (x[1] <= 41.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 20.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 28.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 27.5) {
                                if (x[5] <= 71.41965103149414) {
                                    if (x[3] <= 68.5) {
                                        if (x[2] <= 18.5) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 65.78599166870117) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 11.724773406982422) {
                                        if (x[6] <= -4.837500095367432) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        votes[21] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 22.5) {
                                    if (x[5] <= -71.74028396606445) {
                                        if (x[3] <= 72.0) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 44.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -47.72247886657715) {
                                        if (x[4] <= 27.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -36.98939275741577) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #34
                        if (x[3] <= 13.0) {
                            if (x[1] <= 22.5) {
                                if (x[0] <= 69.0) {
                                    votes[22] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[4] <= 44.0) {
                                    if (x[1] <= 73.5) {
                                        if (x[1] <= 18.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 88.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= -44.1724739074707) {
                                        if (x[3] <= 64.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -3.5) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #35
                        if (x[0] <= 91.5) {
                            if (x[3] <= 37.5) {
                                if (x[1] <= 39.5) {
                                    if (x[5] <= 34.37672710418701) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[4] <= 15.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 32.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[6] <= -43.516194343566895) {
                                    if (x[1] <= 23.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[1] <= 36.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 34.5) {
                                        if (x[1] <= 1.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 48.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #36
                        if (x[3] <= 37.5) {
                            if (x[5] <= -49.80938148498535) {
                                votes[14] += 1;
                            }

                            else {
                                if (x[5] <= 30.933500051498413) {
                                    if (x[1] <= 39.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 14.184071063995361) {
                                        if (x[1] <= -3.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 48.5) {
                                if (x[1] <= 28.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[4] <= 23.5) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -47.72247886657715) {
                                    if (x[4] <= 57.0) {
                                        if (x[0] <= 79.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 45.0) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= -41.0606803894043) {
                                        if (x[1] <= 23.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 19.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #37
                        if (x[4] <= 42.5) {
                            if (x[1] <= 17.5) {
                                if (x[1] <= 3.5) {
                                    if (x[3] <= 18.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 19.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 19.5) {
                                    if (x[3] <= 25.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[1] <= 72.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 41.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -50.483903884887695) {
                                if (x[2] <= 71.5) {
                                    if (x[4] <= 59.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[6] <= -0.8361520003527403) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 16.920456886291504) {
                                        if (x[2] <= 78.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 61.0) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 27.0) {
                                    votes[22] += 1;
                                }

                                else {
                                    if (x[6] <= -41.34592533111572) {
                                        if (x[3] <= 65.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 19.852415680885315) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #38
                        if (x[0] <= 91.0) {
                            if (x[3] <= 37.5) {
                                if (x[4] <= 19.0) {
                                    if (x[0] <= 47.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 41.5) {
                                        if (x[0] <= 6.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 42.0) {
                                    if (x[4] <= 17.0) {
                                        if (x[6] <= 7.315959453582764) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= -64.57884216308594) {
                                        if (x[6] <= -6.866344451904297) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 44.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #39
                        if (x[2] <= 17.5) {
                            if (x[5] <= 21.32847499847412) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[3] <= 26.5) {
                                    if (x[4] <= 26.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 8.0) {
                                        votes[21] += 1;
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 37.5) {
                                if (x[4] <= 45.5) {
                                    if (x[1] <= 17.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[3] <= 41.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -82.27798843383789) {
                                        if (x[0] <= 3.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 27.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -47.72247886657715) {
                                    if (x[2] <= 72.5) {
                                        if (x[3] <= 45.0) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 72.5) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 26.5) {
                                        if (x[4] <= 46.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 63.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #40
                        if (x[3] <= 30.5) {
                            if (x[1] <= 39.5) {
                                if (x[5] <= 30.933500051498413) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[4] <= 26.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[0] <= 15.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 85.0) {
                                    if (x[0] <= -4.5) {
                                        if (x[4] <= 27.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #41
                        if (x[4] <= 42.5) {
                            if (x[0] <= 18.5) {
                                if (x[2] <= 24.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[3] <= 33.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 28.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 15.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 42.5) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[6] <= -27.64478075504303) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[1] <= 13.5) {
                                    if (x[2] <= 10.5) {
                                        if (x[6] <= 25.43707275390625) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 51.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[3] <= 61.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #42
                        if (x[0] <= 91.0) {
                            if (x[0] <= 76.5) {
                                if (x[2] <= 10.5) {
                                    if (x[4] <= 29.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[2] <= 3.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 37.5) {
                                        if (x[5] <= -43.20481872558594) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 48.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 40.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[5] <= -81.05514907836914) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #43
                        if (x[4] <= 42.5) {
                            if (x[5] <= -44.0491828918457) {
                                if (x[4] <= 18.5) {
                                    if (x[6] <= -35.2481951713562) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        if (x[1] <= 73.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 26.5) {
                                    if (x[5] <= 26.049267768859863) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 52.5) {
                                        if (x[1] <= 17.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 115.0617446899414) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[6] <= -45.30288219451904) {
                                if (x[3] <= 64.5) {
                                    votes[7] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -52.15900230407715) {
                                    if (x[4] <= 56.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[5] <= -100.99346542358398) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 28.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[5] <= 18.279905915260315) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #44
                        if (x[4] <= 42.5) {
                            if (x[1] <= 73.5) {
                                if (x[3] <= 13.0) {
                                    if (x[1] <= 22.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= -38.89654731750488) {
                                        if (x[5] <= -103.10334777832031) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -0.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[6] <= 10.66783857345581) {
                                    votes[24] += 1;
                                }

                                else {
                                    votes[8] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[0] <= 5.5) {
                                    if (x[4] <= 76.5) {
                                        if (x[6] <= -38.1792688369751) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 0.17421599850058556) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 29.5) {
                                        if (x[1] <= 57.5) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 7.205897092819214) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #45
                        if (x[3] <= 37.5) {
                            if (x[0] <= 19.5) {
                                if (x[2] <= 24.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[0] <= 5.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[5] <= -6.204227447509766) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 24.0) {
                                    if (x[0] <= 68.5) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 48.5) {
                                if (x[0] <= 27.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[4] <= 23.0) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 44.0) {
                                    if (x[6] <= -41.76664447784424) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[4] <= 60.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 83.0) {
                                        if (x[1] <= 72.5) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #46
                        if (x[3] <= 37.5) {
                            if (x[3] <= 31.0) {
                                if (x[3] <= 12.0) {
                                    if (x[2] <= 8.5) {
                                        if (x[2] <= 4.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 14.591978549957275) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 24.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 5.5) {
                                if (x[1] <= 73.5) {
                                    if (x[5] <= -78.55294036865234) {
                                        if (x[5] <= -102.72937393188477) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 72.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -68.71173858642578) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        if (x[6] <= 6.8238107562065125) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 83.0) {
                                    if (x[1] <= 13.5) {
                                        if (x[4] <= 42.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -68.28065490722656) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #47
                        if (x[2] <= 17.5) {
                            if (x[5] <= 19.989940643310547) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[3] <= 27.0) {
                                    if (x[4] <= 26.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 8.0) {
                                        votes[21] += 1;
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[1] <= 42.0) {
                                    if (x[4] <= 26.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 54.5) {
                                    if (x[1] <= 13.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[6] <= 7.315959453582764) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 47.5) {
                                        if (x[0] <= 3.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 28.28699254989624) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #48
                        if (x[4] <= 42.5) {
                            if (x[2] <= 26.5) {
                                if (x[0] <= 47.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 72.5) {
                                    if (x[3] <= 30.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[5] <= 3.7991600036621094) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 88.5) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[6] <= -44.829002380371094) {
                                if (x[2] <= 59.0) {
                                    votes[7] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 34.5) {
                                    if (x[1] <= 1.0) {
                                        if (x[2] <= 14.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= -52.15900230407715) {
                                        if (x[1] <= 15.5) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 58.808908462524414) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #49
                        if (x[0] <= 91.0) {
                            if (x[2] <= 17.5) {
                                if (x[1] <= 24.0) {
                                    if (x[4] <= 26.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[3] <= 28.0) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 38.5) {
                                    if (x[3] <= 33.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[6] <= -45.30288219451904) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 49.0) {
                                        if (x[0] <= 5.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 73.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #50
                        if (x[2] <= 17.5) {
                            if (x[1] <= 24.0) {
                                if (x[4] <= 26.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        if (x[1] <= -3.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 42.5) {
                                if (x[4] <= 17.0) {
                                    if (x[1] <= 73.5) {
                                        if (x[0] <= 48.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 88.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 15.5) {
                                        if (x[2] <= 52.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 82.5) {
                                    if (x[3] <= 61.5) {
                                        if (x[0] <= 1.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 5.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #51
                        if (x[5] <= -47.72247886657715) {
                            if (x[0] <= 85.0) {
                                if (x[0] <= -3.5) {
                                    if (x[1] <= 51.0) {
                                        votes[16] += 1;
                                    }

                                    else {
                                        votes[24] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 49.0) {
                                        if (x[6] <= -31.287452220916748) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -0.6894560009241104) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 37.5) {
                                if (x[6] <= -41.11766338348389) {
                                    if (x[0] <= -5.5) {
                                        if (x[3] <= 64.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 22.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 12.5) {
                                        if (x[0] <= 69.0) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 44.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 41.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[0] <= 26.5) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        if (x[4] <= 33.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #52
                        if (x[3] <= 12.5) {
                            if (x[1] <= 22.0) {
                                if (x[0] <= 69.0) {
                                    votes[22] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[0] <= -0.5) {
                                if (x[1] <= 55.0) {
                                    if (x[5] <= -81.73091888427734) {
                                        votes[16] += 1;
                                    }

                                    else {
                                        if (x[1] <= 13.5) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 40.0) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 37.5) {
                                    if (x[5] <= -39.91391468048096) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[3] <= 33.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1.5) {
                                        if (x[2] <= 11.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 18.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #53
                        if (x[4] <= 42.5) {
                            if (x[4] <= 18.0) {
                                if (x[0] <= -3.5) {
                                    votes[24] += 1;
                                }

                                else {
                                    if (x[0] <= 27.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[3] <= 23.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 52.5) {
                                    if (x[5] <= 34.990851402282715) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 41.0) {
                                        if (x[5] <= 17.010446548461914) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[6] <= -44.829002380371094) {
                                    if (x[2] <= 59.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 14.374369621276855) {
                                        if (x[6] <= -7.751530408859253) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 26.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #54
                        if (x[2] <= 27.5) {
                            if (x[1] <= 24.0) {
                                if (x[2] <= 17.5) {
                                    if (x[3] <= 27.0) {
                                        if (x[4] <= 26.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 8.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2.0) {
                                        votes[20] += 1;
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[3] <= 37.5) {
                                    if (x[2] <= 53.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[4] <= 27.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 36.5) {
                                        if (x[4] <= 17.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -45.53114414215088) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #55
                        if (x[2] <= 27.5) {
                            if (x[1] <= 24.0) {
                                if (x[3] <= 26.5) {
                                    if (x[0] <= 69.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 17.5) {
                                        if (x[0] <= 50.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 61.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 42.5) {
                                if (x[3] <= 37.5) {
                                    if (x[5] <= -44.18397903442383) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[1] <= 15.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 17.0) {
                                        if (x[0] <= 13.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -5.0795135498046875) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 44.0) {
                                    votes[7] += 1;
                                }

                                else {
                                    if (x[2] <= 72.5) {
                                        if (x[6] <= -6.088924169540405) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 31.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #56
                        if (x[1] <= 37.5) {
                            if (x[3] <= 33.0) {
                                if (x[5] <= 34.37634825706482) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[0] <= 69.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 49.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[2] <= 8.0) {
                                        votes[21] += 1;
                                    }

                                    else {
                                        if (x[2] <= 44.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 32.5) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[0] <= 85.0) {
                                    if (x[2] <= 61.5) {
                                        if (x[6] <= 27.274670600891113) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 73.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #57
                        if (x[5] <= -47.72247886657715) {
                            if (x[1] <= 31.0) {
                                if (x[4] <= 32.5) {
                                    votes[8] += 1;
                                }

                                else {
                                    if (x[0] <= -4.0) {
                                        votes[16] += 1;
                                    }

                                    else {
                                        if (x[2] <= 71.5) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 43.0) {
                                    votes[14] += 1;
                                }

                                else {
                                    if (x[2] <= 73.5) {
                                        if (x[0] <= 83.0) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 34.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 18.0) {
                                if (x[6] <= 14.157316207885742) {
                                    if (x[0] <= 64.0) {
                                        if (x[0] <= 22.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 33.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 44.0) {
                                    if (x[2] <= 52.5) {
                                        if (x[1] <= 16.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 22.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 27.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[2] <= 8.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #58
                        if (x[0] <= 91.0) {
                            if (x[0] <= 77.5) {
                                if (x[6] <= -43.516194343566895) {
                                    if (x[1] <= 23.0) {
                                        if (x[2] <= 61.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 16.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 37.5) {
                                        if (x[5] <= -49.80938148498535) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -3.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #59
                        if (x[2] <= 27.5) {
                            if (x[1] <= 24.0) {
                                if (x[3] <= 28.0) {
                                    if (x[4] <= 28.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 60.5) {
                                        if (x[6] <= 0.40147602558135986) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 17.5) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[5] <= -47.72247886657715) {
                                if (x[0] <= 83.0) {
                                    if (x[4] <= 49.5) {
                                        if (x[4] <= 18.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 33.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[6] <= -35.36013746261597) {
                                        if (x[1] <= 23.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 19.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #60
                        if (x[2] <= 27.5) {
                            if (x[0] <= 26.5) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[0] <= 71.0) {
                                    if (x[6] <= 11.896883487701416) {
                                        if (x[1] <= 1.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= -3.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= -47.83241271972656) {
                                if (x[3] <= 43.0) {
                                    votes[14] += 1;
                                }

                                else {
                                    if (x[1] <= 31.0) {
                                        if (x[0] <= -3.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 56.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[6] <= -35.5883994102478) {
                                    if (x[1] <= 23.0) {
                                        if (x[4] <= 67.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 64.0) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 18.5) {
                                        if (x[5] <= 13.688369750976562) {
                                            votes[25] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 64.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #61
                        if (x[4] <= 42.5) {
                            if (x[1] <= 17.5) {
                                if (x[4] <= 15.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[5] <= -44.207374572753906) {
                                    if (x[4] <= 19.5) {
                                        if (x[2] <= 76.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 39.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[5] <= 67.81463718414307) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[6] <= -44.40073585510254) {
                                if (x[2] <= 59.0) {
                                    votes[7] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 83.0) {
                                    if (x[0] <= -3.5) {
                                        if (x[5] <= -22.125356674194336) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 60.13798904418945) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #62
                        if (x[5] <= -47.686662673950195) {
                            if (x[3] <= 43.0) {
                                votes[14] += 1;
                            }

                            else {
                                if (x[0] <= -4.0) {
                                    if (x[0] <= -10.5) {
                                        if (x[4] <= 35.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 34.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -76.9989128112793) {
                                        if (x[6] <= -0.6894560009241104) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 84.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 18.0) {
                                if (x[0] <= 31.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[1] <= 30.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 80.0) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 23.0) {
                                    if (x[1] <= 13.0) {
                                        if (x[2] <= 11.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -3.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 63.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[6] <= -35.36013746261597) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #63
                        if (x[0] <= 91.0) {
                            if (x[3] <= 37.5) {
                                if (x[2] <= 53.5) {
                                    if (x[3] <= 12.0) {
                                        if (x[5] <= 20.058785438537598) {
                                            votes[5] += 1;
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
                                    if (x[1] <= 41.0) {
                                        if (x[0] <= 2.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -47.72247886657715) {
                                    if (x[0] <= -3.5) {
                                        if (x[5] <= -95.49860382080078) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -73.10664367675781) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 29.133947372436523) {
                                        if (x[2] <= 53.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 14.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #64
                        if (x[5] <= -47.72247886657715) {
                            if (x[3] <= 43.0) {
                                votes[14] += 1;
                            }

                            else {
                                if (x[0] <= -10.5) {
                                    votes[24] += 1;
                                }

                                else {
                                    if (x[5] <= -75.9639778137207) {
                                        if (x[1] <= 16.0) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 26.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 18.5) {
                                if (x[5] <= 26.049267768859863) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[3] <= 24.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 44.0) {
                                    if (x[2] <= 52.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[1] <= 21.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 13.0) {
                                        if (x[3] <= 28.0) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -34.2442421913147) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #65
                        if (x[1] <= 22.5) {
                            if (x[6] <= -45.951863288879395) {
                                votes[7] += 1;
                            }

                            else {
                                if (x[3] <= 50.5) {
                                    if (x[1] <= 2.5) {
                                        if (x[1] <= -1.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 44.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 34.5) {
                                        if (x[4] <= 60.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 58.808908462524414) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -47.83241271972656) {
                                if (x[2] <= 61.5) {
                                    if (x[1] <= 58.5) {
                                        if (x[1] <= 57.5) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 63.5) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 73.5) {
                                        if (x[5] <= -106.56772232055664) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 72.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 37.5) {
                                    if (x[6] <= -30.227358132600784) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[4] <= 53.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 28.0) {
                                        if (x[6] <= 15.062753200531006) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 54.0) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #66
                        if (x[3] <= 37.5) {
                            if (x[1] <= 39.0) {
                                if (x[0] <= 69.0) {
                                    if (x[4] <= 45.5) {
                                        if (x[0] <= 5.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 17.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[3] <= 48.5) {
                                    if (x[0] <= 27.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[6] <= -27.60237741470337) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= -44.8415002822876) {
                                        if (x[5] <= -88.78094482421875) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 9.651238441467285) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #67
                        if (x[2] <= 17.5) {
                            if (x[1] <= 24.0) {
                                if (x[4] <= 26.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 27.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[6] <= 0.7751100175082684) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 37.5) {
                                if (x[6] <= -45.30288219451904) {
                                    if (x[2] <= 59.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 50.0) {
                                        if (x[3] <= 33.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -64.28340339660645) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 42.0) {
                                    if (x[1] <= 71.0) {
                                        if (x[2] <= 67.5) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 88.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 56.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[5] <= -57.99483299255371) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #68
                        if (x[3] <= 13.0) {
                            if (x[1] <= 22.0) {
                                if (x[4] <= 28.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[22] += 1;
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[3] <= 37.5) {
                                    if (x[2] <= 53.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[4] <= 26.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 48.5) {
                                        if (x[1] <= 28.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 44.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #69
                        if (x[3] <= 37.5) {
                            if (x[2] <= 53.5) {
                                if (x[4] <= 19.5) {
                                    if (x[0] <= 48.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 45.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 41.0) {
                                    if (x[2] <= 58.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 49.0) {
                                if (x[1] <= 28.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 57.0) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 83.0) {
                                    if (x[2] <= 44.0) {
                                        if (x[0] <= 16.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 73.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #70
                        if (x[0] <= 91.0) {
                            if (x[5] <= -47.72247886657715) {
                                if (x[4] <= 49.5) {
                                    if (x[1] <= 72.5) {
                                        if (x[0] <= 49.5) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 88.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 40.0) {
                                        if (x[0] <= -3.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 75.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 23.0) {
                                    if (x[0] <= 72.5) {
                                        if (x[1] <= 13.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 11.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[4] <= 49.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #71
                        if (x[5] <= -48.25934982299805) {
                            if (x[0] <= 83.0) {
                                if (x[3] <= 43.0) {
                                    votes[14] += 1;
                                }

                                else {
                                    if (x[0] <= -4.0) {
                                        if (x[0] <= -10.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 33.5) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            if (x[5] <= 30.706457138061523) {
                                if (x[2] <= 21.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[0] <= 2.5) {
                                        if (x[3] <= 41.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 22.0) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 72.5) {
                                    if (x[3] <= 20.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[5] <= 58.481544494628906) {
                                            votes[10] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #72
                        if (x[2] <= 27.5) {
                            if (x[3] <= 27.5) {
                                if (x[1] <= 22.5) {
                                    if (x[6] <= 14.184071063995361) {
                                        if (x[1] <= -3.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 1.0) {
                                    if (x[0] <= 47.5) {
                                        if (x[3] <= 65.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= -2.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[17] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[3] <= 30.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[5] <= 5.992151260375977) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 85.0) {
                                    if (x[1] <= 73.5) {
                                        if (x[0] <= 0.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 72.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #73
                        if (x[3] <= 12.0) {
                            if (x[1] <= 22.5) {
                                if (x[4] <= 28.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[22] += 1;
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[5] <= -42.64665985107422) {
                                    votes[14] += 1;
                                }

                                else {
                                    if (x[0] <= 5.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 44.0) {
                                    if (x[2] <= 27.5) {
                                        if (x[1] <= 1.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 70.5) {
                                        if (x[1] <= 65.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 73.5) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #74
                        if (x[2] <= 27.5) {
                            if (x[4] <= 29.5) {
                                if (x[1] <= 22.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[6] <= 11.908490657806396) {
                                    if (x[1] <= 1.5) {
                                        if (x[4] <= 61.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 17.446374893188477) {
                                        if (x[4] <= 67.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 29.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 85.0) {
                                if (x[4] <= 45.5) {
                                    if (x[3] <= 37.5) {
                                        if (x[3] <= 30.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 17.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -64.57884216308594) {
                                        if (x[1] <= 40.0) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 28.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #75
                        if (x[2] <= 17.5) {
                            if (x[5] <= 21.230813026428223) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[3] <= 28.0) {
                                    if (x[6] <= 14.184071063995361) {
                                        if (x[2] <= 6.0) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 66.5) {
                                        if (x[6] <= 0.40147602558135986) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[5] <= -47.83241271972656) {
                                if (x[4] <= 42.0) {
                                    if (x[3] <= 42.0) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[4] <= 4.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 84.5) {
                                        if (x[6] <= -6.268322229385376) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 33.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= 44.0) {
                                        if (x[2] <= 27.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 28.815768241882324) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #76
                        if (x[0] <= 76.5) {
                            if (x[0] <= -0.5) {
                                if (x[3] <= 37.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[2] <= 49.5) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[6] <= -37.03488302230835) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 17.0) {
                                    if (x[4] <= 41.5) {
                                        if (x[5] <= 73.1157341003418) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 12.782042980194092) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 18.5) {
                                        if (x[6] <= 14.754947185516357) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -29.048956871032715) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[6] <= 13.749432563781738) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[5] <= 11.98979377746582) {
                                    if (x[3] <= 58.0) {
                                        votes[12] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #77
                        if (x[3] <= 37.5) {
                            if (x[4] <= 19.0) {
                                if (x[0] <= 47.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 53.5) {
                                    if (x[5] <= 33.94037675857544) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 15.0) {
                                        if (x[3] <= 31.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 22.5) {
                                if (x[2] <= 8.0) {
                                    votes[21] += 1;
                                }

                                else {
                                    if (x[6] <= -44.821455001831055) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[5] <= -64.28340339660645) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 71.5) {
                                    if (x[0] <= 84.5) {
                                        if (x[3] <= 65.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 34.0) {
                                        if (x[6] <= -35.08225393295288) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 58.0) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #78
                        if (x[0] <= 77.5) {
                            if (x[2] <= 11.5) {
                                if (x[5] <= 22.5110502243042) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[1] <= -2.5) {
                                        if (x[3] <= 29.0) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 45.5) {
                                    if (x[2] <= 67.5) {
                                        if (x[0] <= 15.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 13.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 49.5) {
                                        if (x[2] <= 27.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -112.91828918457031) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 25.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #79
                        if (x[2] <= 27.5) {
                            if (x[4] <= 29.5) {
                                if (x[0] <= 47.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 28.0) {
                                    votes[22] += 1;
                                }

                                else {
                                    if (x[0] <= 47.5) {
                                        if (x[3] <= 67.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 17.5) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 37.5) {
                                if (x[4] <= 45.5) {
                                    if (x[5] <= 30.286128759384155) {
                                        if (x[2] <= 66.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 58.808908462524414) {
                                        if (x[6] <= -44.40073585510254) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 64.0) {
                                            votes[10] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -47.686662673950195) {
                                    if (x[0] <= -4.5) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        if (x[0] <= 83.0) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 26.5) {
                                        if (x[0] <= 0.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 52.0) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #80
                        if (x[3] <= 37.5) {
                            if (x[2] <= 53.5) {
                                if (x[0] <= 32.5) {
                                    if (x[3] <= 12.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 69.5) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 41.0) {
                                    if (x[0] <= 2.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 44.0) {
                                if (x[1] <= 11.5) {
                                    if (x[4] <= 71.5) {
                                        if (x[6] <= 10.857345581054688) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 18.0) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[7] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 29.037120819091797) {
                                    if (x[5] <= -48.25934982299805) {
                                        if (x[0] <= -10.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 16.0) {
                                            votes[25] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 48.5) {
                                        if (x[0] <= 30.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 4.0) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #81
                        if (x[1] <= 37.5) {
                            if (x[3] <= 33.0) {
                                if (x[5] <= 30.933878898620605) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[4] <= 26.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= -85.63428115844727) {
                                    if (x[2] <= 68.5) {
                                        votes[15] += 1;
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 13.0) {
                                        if (x[1] <= 0.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 59.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= -4.5) {
                                votes[24] += 1;
                            }

                            else {
                                if (x[0] <= 85.0) {
                                    if (x[4] <= 49.0) {
                                        if (x[2] <= 32.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 61.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        // tree #82
                        if (x[5] <= -48.223533630371094) {
                            if (x[4] <= 42.0) {
                                if (x[2] <= 67.5) {
                                    votes[14] += 1;
                                }

                                else {
                                    if (x[1] <= 72.5) {
                                        if (x[4] <= 4.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 88.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 83.0) {
                                    if (x[0] <= 44.5) {
                                        if (x[6] <= -6.268322229385376) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -91.59930038452148) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 18.0) {
                                if (x[1] <= 22.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[6] <= -27.343961238861084) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        if (x[1] <= 58.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 44.0) {
                                    if (x[5] <= 28.67721652984619) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 28.5) {
                                        if (x[3] <= 26.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -26.38382339477539) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #83
                        if (x[2] <= 17.5) {
                            if (x[1] <= 24.0) {
                                if (x[3] <= 26.5) {
                                    if (x[2] <= 7.5) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[4] <= 29.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1.0) {
                                        votes[21] += 1;
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 42.5) {
                                if (x[0] <= 15.0) {
                                    if (x[3] <= 33.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= -4.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 42.5) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[0] <= 46.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 44.0) {
                                    if (x[0] <= 21.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[6] <= -10.6020188331604) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 72.5) {
                                        if (x[4] <= 59.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 16.82573127746582) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #84
                        if (x[5] <= -47.83241271972656) {
                            if (x[0] <= 83.0) {
                                if (x[4] <= 49.0) {
                                    if (x[4] <= 18.5) {
                                        if (x[6] <= 6.921834468841553) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 15.5) {
                                        votes[15] += 1;
                                    }

                                    else {
                                        if (x[1] <= 40.0) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 17.5) {
                                if (x[0] <= 31.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[3] <= 24.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 44.0) {
                                    if (x[3] <= 33.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 26.5) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[1] <= 13.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #85
                        if (x[4] <= 42.5) {
                            if (x[2] <= 26.5) {
                                if (x[5] <= 25.980422973632812) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 72.5) {
                                    if (x[0] <= 15.5) {
                                        if (x[1] <= 17.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -103.52243423461914) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 88.5) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[2] <= 44.0) {
                                    if (x[3] <= 27.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[5] <= 42.98185062408447) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= -44.1724739074707) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[2] <= 72.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #86
                        if (x[3] <= 13.0) {
                            if (x[5] <= 20.058785438537598) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[0] <= 69.5) {
                                    votes[22] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 42.0) {
                                if (x[1] <= 18.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    if (x[1] <= 72.5) {
                                        if (x[4] <= 18.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 57.0) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[6] <= -45.951863288879395) {
                                    if (x[2] <= 59.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 54.5) {
                                        if (x[0] <= 69.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -59.77986526489258) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #87
                        if (x[4] <= 18.0) {
                            if (x[3] <= 25.0) {
                                if (x[1] <= 22.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 71.5) {
                                    if (x[5] <= -96.88923263549805) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        if (x[0] <= 44.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 23.0) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[4] <= 45.5) {
                                    if (x[0] <= 14.0) {
                                        if (x[3] <= 33.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    votes[22] += 1;
                                }
                            }

                            else {
                                if (x[6] <= -45.30288219451904) {
                                    if (x[3] <= 64.5) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 20.052136063575745) {
                                        if (x[6] <= -7.099352121353149) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 49.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #88
                        if (x[0] <= 91.0) {
                            if (x[2] <= 27.5) {
                                if (x[5] <= 21.230813026428223) {
                                    votes[5] += 1;
                                }

                                else {
                                    if (x[2] <= 17.5) {
                                        if (x[4] <= 26.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 63.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 45.5) {
                                    if (x[1] <= 17.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[2] <= 53.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 44.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[1] <= 50.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #89
                        if (x[3] <= 37.5) {
                            if (x[3] <= 30.0) {
                                if (x[5] <= 33.940730810165405) {
                                    if (x[4] <= 19.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 12.083377838134766) {
                                        if (x[3] <= -0.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= 14.184071063995361) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 27.5) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 40.5) {
                                if (x[5] <= 3.3263931274414062) {
                                    if (x[0] <= 13.0) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        if (x[6] <= -27.89704179763794) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 25.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[5] <= 58.481544494628906) {
                                    if (x[2] <= 44.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[4] <= 56.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 63.0) {
                                        if (x[2] <= 8.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }
                            }
                        }

                        // tree #90
                        if (x[4] <= 18.0) {
                            if (x[1] <= 73.5) {
                                if (x[0] <= 26.5) {
                                    if (x[6] <= 4.047990489780204) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 16.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[6] <= -27.89704179763794) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 57.0) {
                                    votes[8] += 1;
                                }

                                else {
                                    votes[24] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[1] <= 41.5) {
                                    if (x[0] <= 28.0) {
                                        if (x[0] <= 6.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }

                            else {
                                if (x[6] <= -44.829002380371094) {
                                    if (x[4] <= 64.5) {
                                        if (x[3] <= 65.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= -6.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 83.0) {
                                        if (x[2] <= 8.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #91
                        if (x[3] <= 37.5) {
                            if (x[3] <= 30.5) {
                                if (x[1] <= 39.5) {
                                    if (x[1] <= 16.0) {
                                        if (x[0] <= 70.0) {
                                            votes[22] += 1;
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
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 36.5) {
                                    votes[14] += 1;
                                }

                                else {
                                    if (x[0] <= 15.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 84.5) {
                                if (x[4] <= 5.5) {
                                    if (x[2] <= 79.5) {
                                        if (x[1] <= 72.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 1.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 48.5) {
                                        if (x[1] <= 28.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 44.0) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #92
                        if (x[5] <= -47.72247886657715) {
                            if (x[3] <= 43.0) {
                                votes[14] += 1;
                            }

                            else {
                                if (x[2] <= 70.5) {
                                    if (x[0] <= 83.0) {
                                        if (x[5] <= -95.83879470825195) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 19.23904323577881) {
                                        if (x[1] <= 71.0) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= -80.20690155029297) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 17.5) {
                                if (x[1] <= 24.0) {
                                    if (x[0] <= 72.0) {
                                        if (x[6] <= 6.340094566345215) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 27.5) {
                                    if (x[4] <= 62.5) {
                                        if (x[6] <= -5.352431058883667) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        votes[20] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 41.5) {
                                        if (x[4] <= 43.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 29.037120819091797) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #93
                        if (x[3] <= 37.5) {
                            if (x[4] <= 19.5) {
                                if (x[1] <= 22.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 41.5) {
                                    if (x[2] <= 24.5) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 8.0) {
                                votes[21] += 1;
                            }

                            else {
                                if (x[2] <= 27.5) {
                                    if (x[1] <= 1.0) {
                                        votes[20] += 1;
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 46.5) {
                                        if (x[0] <= 27.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -42.22326946258545) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #94
                        if (x[4] <= 42.5) {
                            if (x[3] <= 11.5) {
                                if (x[1] <= 22.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 30.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[3] <= 37.5) {
                                        if (x[1] <= 24.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 48.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 83.0) {
                                if (x[6] <= -45.53114414215088) {
                                    if (x[2] <= 59.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 34.5) {
                                        if (x[4] <= 71.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 15.5) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #95
                        if (x[2] <= 17.5) {
                            if (x[0] <= 26.5) {
                                votes[5] += 1;
                            }

                            else {
                                if (x[6] <= 11.241462707519531) {
                                    if (x[0] <= 72.5) {
                                        if (x[1] <= 0.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[5] <= 68.67644119262695) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[0] <= 47.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 27.5) {
                                if (x[1] <= 2.0) {
                                    votes[20] += 1;
                                }

                                else {
                                    votes[17] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 42.5) {
                                    if (x[1] <= 18.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[5] <= -38.42378044128418) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 44.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[0] <= 83.0) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #96
                        if (x[2] <= 27.5) {
                            if (x[1] <= 24.0) {
                                if (x[3] <= 27.0) {
                                    if (x[0] <= 69.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 49.5) {
                                        if (x[6] <= -0.6338109746575356) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 39.5) {
                                if (x[6] <= -18.74553394317627) {
                                    votes[7] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 14.5) {
                                    if (x[2] <= 64.5) {
                                        if (x[3] <= 51.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 74.5) {
                                            votes[25] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 42.5) {
                                        if (x[3] <= 30.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 55.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #97
                        if (x[2] <= 17.5) {
                            if (x[4] <= 29.5) {
                                if (x[6] <= 14.157316207885742) {
                                    if (x[5] <= 27.48837661743164) {
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

                            else {
                                if (x[6] <= 2.609352946281433) {
                                    votes[17] += 1;
                                }

                                else {
                                    if (x[3] <= 28.5) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[2] <= 8.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[1] <= 41.5) {
                                    if (x[3] <= 33.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 27.5) {
                                    if (x[0] <= 63.5) {
                                        if (x[1] <= 2.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 54.5) {
                                        if (x[4] <= 40.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 44.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #98
                        if (x[0] <= -0.5) {
                            if (x[1] <= 55.0) {
                                if (x[4] <= 44.5) {
                                    if (x[3] <= 38.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 56.5) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        if (x[6] <= -37.95100688934326) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 89.0) {
                                    votes[24] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 40.5) {
                                if (x[4] <= 18.0) {
                                    if (x[0] <= 26.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[6] <= -31.51824426651001) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= -40.6875638961792) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[3] <= 32.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 16.0) {
                                    votes[22] += 1;
                                }

                                else {
                                    if (x[5] <= -51.671648025512695) {
                                        if (x[0] <= 45.5) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 60.03235626220703) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #99
                        if (x[3] <= 37.5) {
                            if (x[3] <= 30.5) {
                                if (x[5] <= 30.933878898620605) {
                                    if (x[4] <= 19.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 69.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 24.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[5] <= 29.133947372436523) {
                                if (x[0] <= -4.5) {
                                    if (x[5] <= -95.49860382080078) {
                                        votes[16] += 1;
                                    }

                                    else {
                                        if (x[4] <= 27.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 73.5) {
                                        if (x[4] <= 57.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 76.5) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1.5) {
                                    if (x[4] <= 60.5) {
                                        if (x[6] <= 6.974126577377319) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= -0.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 49.0) {
                                        if (x[6] <= -35.50747875869274) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 68.5) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #100
                        if (x[3] <= 12.0) {
                            if (x[1] <= 22.0) {
                                if (x[4] <= 26.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[22] += 1;
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 27.5) {
                                if (x[2] <= 17.5) {
                                    if (x[1] <= 1.0) {
                                        votes[21] += 1;
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 2.0) {
                                        votes[20] += 1;
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 5.5) {
                                    if (x[0] <= 14.5) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        if (x[6] <= -29.5988450050354) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 83.0) {
                                        if (x[1] <= 38.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 26; i++) {
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
                            return "a";
                            case 1:
                            return "b";
                            case 2:
                            return "c";
                            case 3:
                            return "d";
                            case 4:
                            return "e";
                            case 5:
                            return "f";
                            case 6:
                            return "g";
                            case 7:
                            return "h";
                            case 8:
                            return "i";
                            case 9:
                            return "j";
                            case 10:
                            return "k";
                            case 11:
                            return "l";
                            case 12:
                            return "m";
                            case 13:
                            return "n";
                            case 14:
                            return "o";
                            case 15:
                            return "p";
                            case 16:
                            return "q";
                            case 17:
                            return "r";
                            case 18:
                            return "s";
                            case 19:
                            return "t";
                            case 20:
                            return "u";
                            case 21:
                            return "v";
                            case 22:
                            return "w";
                            case 23:
                            return "x";
                            case 24:
                            return "y";
                            case 25:
                            return "z";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }