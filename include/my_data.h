#include "my_Algo.h"

using namespace std;

class my_data{
    // friend class my_DS; // not causing error ?
    public:
        int get_station_num();
        my_graph* read_map();
        my_station** read_station();
        void read_fee();
        int read_user();
        // for fee
        int discount[3];    // electric, lady, road
        int regular[3];
        int waiting;
        float switching;    // bug: if switching is "int", eof will always be 0 (false), need to be float
        int transferring;
    
    private:
        // for map
        int start_station;
        int end_station;
        int distance;   // required time between stations
        // for station
        int station_id;
        int station_num = 0;
        string bike_type;
        int num_elec;
        int num_lady;
        int num_road;
        // for user
        int user_num = 0;
};