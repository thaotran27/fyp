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
                        if (x[2] <= 16.5) {
                            if (x[2] <= -3.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 15.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #2
                        if (x[7] <= 4.901098966598511) {
                            if (x[2] <= 17.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 24.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #3
                        if (x[7] <= 4.992025852203369) {
                            if (x[3] <= 14.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 17.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #4
                        if (x[5] <= -1.7862420082092285) {
                            if (x[2] <= 18.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 22.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #5
                        if (x[2] <= 16.5) {
                            if (x[2] <= -3.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.995018720626831) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #6
                        if (x[7] <= 4.992025852203369) {
                            if (x[3] <= 13.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 24.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #7
                        if (x[2] <= 16.5) {
                            if (x[0] <= 25.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 21.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #8
                        if (x[3] <= 13.5) {
                            if (x[3] <= -2.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 15.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #9
                        if (x[2] <= 16.5) {
                            if (x[7] <= 5.842674493789673) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #10
                        if (x[0] <= 37.5) {
                            if (x[4] <= 23.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 8.910273551940918) {
                                votes[1] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #11
                        if (x[1] <= 11.5) {
                            if (x[2] <= 22.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #12
                        if (x[2] <= 16.5) {
                            if (x[4] <= 10.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 22.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #13
                        if (x[5] <= -1.7862420082092285) {
                            if (x[3] <= 15.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 57.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #14
                        if (x[1] <= 11.5) {
                            if (x[2] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[7] <= 4.992025852203369) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #15
                        if (x[1] <= 12.5) {
                            if (x[3] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 26.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #16
                        if (x[2] <= 16.5) {
                            if (x[8] <= -0.023823999799787998) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 15.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #17
                        if (x[5] <= -1.7862420082092285) {
                            if (x[3] <= 14.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[8] <= 0.1258384995162487) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #18
                        if (x[4] <= 6.5) {
                            if (x[0] <= 13.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 21.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #19
                        if (x[4] <= 22.5) {
                            if (x[10] <= -0.026878000237047672) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 70.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #20
                        if (x[4] <= 21.5) {
                            if (x[1] <= 11.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 26.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #21
                        if (x[7] <= 4.869394540786743) {
                            if (x[0] <= 38.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.939984083175659) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #22
                        if (x[3] <= 13.5) {
                            if (x[4] <= 10.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 12.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #23
                        if (x[4] <= 6.5) {
                            if (x[3] <= -2.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 22.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #24
                        if (x[3] <= 14.5) {
                            if (x[2] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 13.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #25
                        if (x[7] <= 4.901098966598511) {
                            if (x[2] <= 18.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 24.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #26
                        if (x[2] <= 16.5) {
                            if (x[0] <= 25.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.94417142868042) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #27
                        if (x[6] <= 7.94417142868042) {
                            if (x[3] <= 13.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 9.02632474899292) {
                                votes[1] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #28
                        if (x[6] <= 7.94417142868042) {
                            if (x[1] <= 11.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 15.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #29
                        if (x[2] <= 16.5) {
                            if (x[10] <= 0.04398249834775925) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 12.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #30
                        if (x[1] <= 12.5) {
                            if (x[2] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 53.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #31
                        if (x[3] <= 13.5) {
                            if (x[2] <= -3.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 20.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #32
                        if (x[2] <= 16.5) {
                            if (x[4] <= 10.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 13.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #33
                        if (x[1] <= 11.5) {
                            if (x[3] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 65.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #34
                        if (x[1] <= 13.5) {
                            if (x[4] <= 9.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 68.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #35
                        if (x[2] <= 16.5) {
                            if (x[4] <= 10.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 14.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #36
                        if (x[7] <= 4.869394540786743) {
                            if (x[2] <= 17.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 14.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #37
                        if (x[2] <= 16.5) {
                            if (x[2] <= -2.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 12.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #38
                        if (x[4] <= 6.5) {
                            if (x[2] <= 16.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 13.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #39
                        if (x[6] <= 7.995018720626831) {
                            if (x[0] <= 37.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 18.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #40
                        if (x[3] <= 13.5) {
                            if (x[0] <= 4.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 21.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #41
                        if (x[2] <= 16.5) {
                            if (x[3] <= -2.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 22.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #42
                        if (x[3] <= 13.5) {
                            if (x[4] <= 9.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 13.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #43
                        if (x[2] <= 16.5) {
                            if (x[3] <= -2.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 11.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #44
                        if (x[7] <= 4.992025852203369) {
                            if (x[2] <= 17.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #45
                        if (x[0] <= 39.5) {
                            if (x[2] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 27.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #46
                        if (x[4] <= 6.5) {
                            if (x[2] <= 16.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 65.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #47
                        if (x[0] <= 37.5) {
                            if (x[4] <= 23.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 27.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #48
                        if (x[4] <= 6.5) {
                            if (x[8] <= 0.6371324956417084) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 23.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #49
                        if (x[2] <= 16.5) {
                            if (x[7] <= 9.156733989715576) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 12.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #50
                        if (x[4] <= 6.5) {
                            if (x[7] <= 5.842674493789673) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 65.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #51
                        if (x[2] <= 16.5) {
                            if (x[7] <= 9.232107639312744) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 21.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #52
                        if (x[7] <= 4.992025852203369) {
                            if (x[4] <= 7.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #53
                        if (x[2] <= 16.5) {
                            if (x[7] <= 9.232107639312744) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 70.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #54
                        if (x[8] <= 0.10018149763345718) {
                            if (x[4] <= 6.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[7] <= 5.267200946807861) {
                                votes[2] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #55
                        if (x[2] <= 16.5) {
                            if (x[3] <= -2.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 23.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #56
                        if (x[5] <= -1.7862420082092285) {
                            if (x[3] <= 14.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 54.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #57
                        if (x[2] <= 16.5) {
                            if (x[4] <= 9.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 13.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #58
                        if (x[1] <= 11.5) {
                            if (x[0] <= 33.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #59
                        if (x[2] <= 16.5) {
                            if (x[2] <= -3.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 15.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #60
                        if (x[3] <= 14.5) {
                            if (x[0] <= 16.0) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 20.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #61
                        if (x[2] <= 16.5) {
                            if (x[3] <= -3.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 15.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #62
                        if (x[5] <= -1.7862420082092285) {
                            if (x[6] <= 8.20020341873169) {
                                votes[2] += 1;
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
                                votes[0] += 1;
                            }
                        }

                        // tree #63
                        if (x[2] <= 17.0) {
                            if (x[7] <= 5.405984878540039) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.953742504119873) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #64
                        if (x[2] <= 16.5) {
                            if (x[3] <= -2.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 20.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #65
                        if (x[4] <= 6.5) {
                            if (x[0] <= 4.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[7] <= 4.992025852203369) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #66
                        if (x[1] <= 12.5) {
                            if (x[4] <= 9.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[7] <= 4.901098966598511) {
                                votes[4] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #67
                        if (x[4] <= 6.5) {
                            if (x[2] <= 16.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.94417142868042) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #68
                        if (x[2] <= 16.5) {
                            if (x[1] <= -1.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 22.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #69
                        if (x[4] <= 6.5) {
                            if (x[3] <= 14.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 11.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #70
                        if (x[3] <= 14.5) {
                            if (x[2] <= -3.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 20.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #71
                        if (x[2] <= 16.5) {
                            if (x[7] <= 9.156733989715576) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[8] <= 0.05681049823760986) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #72
                        if (x[0] <= 39.5) {
                            if (x[4] <= 24.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[5] <= -0.17168500274419785) {
                                votes[1] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #73
                        if (x[1] <= 11.5) {
                            if (x[2] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.995018720626831) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #74
                        if (x[3] <= 14.5) {
                            if (x[4] <= 9.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 11.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #75
                        if (x[2] <= 16.5) {
                            if (x[0] <= 20.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 70.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #76
                        if (x[3] <= 13.5) {
                            if (x[4] <= 9.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 65.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #77
                        if (x[7] <= 4.940580368041992) {
                            if (x[5] <= -1.694716453552246) {
                                votes[1] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 24.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #78
                        if (x[3] <= 14.5) {
                            if (x[7] <= 5.405984878540039) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 11.5) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #79
                        if (x[2] <= 16.5) {
                            if (x[0] <= 32.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 70.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #80
                        if (x[4] <= 6.5) {
                            if (x[0] <= 4.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.953742504119873) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #81
                        if (x[4] <= 23.5) {
                            if (x[2] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 26.0) {
                                votes[3] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #82
                        if (x[1] <= 11.5) {
                            if (x[4] <= 11.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 68.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #83
                        if (x[3] <= 12.5) {
                            if (x[3] <= -2.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 70.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #84
                        if (x[6] <= 7.953742504119873) {
                            if (x[4] <= 24.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 14.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #85
                        if (x[4] <= 6.5) {
                            if (x[1] <= 12.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.953742504119873) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #86
                        if (x[3] <= 14.5) {
                            if (x[0] <= 27.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 70.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #87
                        if (x[4] <= 6.5) {
                            if (x[7] <= 9.156733989715576) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 21.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #88
                        if (x[1] <= 12.5) {
                            if (x[3] <= 20.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 64.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #89
                        if (x[3] <= 13.5) {
                            if (x[0] <= 20.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 20.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #90
                        if (x[2] <= 16.5) {
                            if (x[4] <= 10.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 65.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #91
                        if (x[3] <= 14.5) {
                            if (x[2] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[7] <= 4.901098966598511) {
                                votes[3] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #92
                        if (x[3] <= 13.5) {
                            if (x[4] <= 9.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 23.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #93
                        if (x[2] <= 16.5) {
                            if (x[0] <= 16.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.94417142868042) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #94
                        if (x[1] <= 11.5) {
                            if (x[3] <= 16.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 25.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #95
                        if (x[4] <= 6.5) {
                            if (x[2] <= 18.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 23.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #96
                        if (x[2] <= 16.5) {
                            if (x[0] <= 25.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.94417142868042) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #97
                        if (x[2] <= 16.5) {
                            if (x[4] <= 10.5) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 20.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #98
                        if (x[0] <= 37.5) {
                            if (x[4] <= 24.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 27.0) {
                                votes[1] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #99
                        if (x[3] <= 13.5) {
                            if (x[7] <= 5.405984878540039) {
                                votes[1] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[6] <= 7.94417142868042) {
                                votes[2] += 1;
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #100
                        if (x[3] <= 13.5) {
                            if (x[3] <= -2.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 70.5) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
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
                            return "A";
                            case 1:
                            return "B";
                            case 2:
                            return "C";
                            case 3:
                            return "D";
                            case 4:
                            return "O";
                            case 5:
                            return "S";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }