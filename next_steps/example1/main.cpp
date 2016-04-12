#include <iostream>
#include <cmath>

using namespace std;

void startUp() {

    cout << "Welcome to Artillery.\n"
            "You are in the middle of a war and being charged by thousands of enemies.\n"
            "You have one cannon, which you can shoot at any angle.\n"
            "You only have 10 cannonballs for this target..\n"
            "Let's begin..."
         << endl;
}

// compute distance of a shot for a given angle
double shotDistance(double angle) {
    double velocity = 200.0; // initial velocity of 200 ft/sec
    double gravity = 32.2; // gravity for distance calculation

// in_angle is the angle the player has entered, converted to radians.
    double in_angle = angle * 0.01745329252;
    double timeInAir = (2.0 * velocity * sin(in_angle)) / gravity;
    return  round((velocity * cos(in_angle)) * timeInAir);
}

int fire() {
    double distance = 507; // rand() % 1000 + 1;
    double shotDist = 0;
    double angle = 0;
    while (true) {
        cout << "enter angle: " << endl;
        cin >> angle;
        shotDist = shotDistance(angle);
        if (distance == shotDist) {
            break;
        } else if (distance < shotDist) {
            cout << "you over shot by " + to_string(shotDist - distance)
                     << endl;
        } else {
            cout << "you under shot by " + to_string(distance - shotDist)
            << endl;
        }
    }

    return 1;
}

int main() {


    startUp(); // This displays the introductory script.
    int killed = 0;
    char done = 'y';
    srand ((unsigned int) time(nullptr));
    do {

        killed += fire(); // fire() contains the main loop of each round.
        cout << "I see another one, care to shoot again? (Y/N) " << endl;
        cin >> done;
    } while (done != 'n');
    cout << "You killed " << killed << " of the enemy." << endl;

    return 0;
}











