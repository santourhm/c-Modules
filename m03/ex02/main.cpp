/* ************************************************************************** */
/*                                                                            */
/* *#*#*  #   #  *#*#*  #      #     #    *#*                                 */
/* #   #  #   #  #      #      #     #   #   #                                */
/* *#*#*  *#*#*  *#*#*  #      # * * #   *#*#*                                */
/* #      #   #  #      #      #     #   #   #                                */
/* #      #   #  *#*#*  *#*#*  #     #   #   #          By : SANTOURA Hamza   */
/*                                                                            */
/* ************************************************************************** */
/* Tel : +33758985508   | E-mail :     hamza.santoura@phelma.grenoble-inp.fr  */
/* ************************************************************************** */


#include <iostream>
#include <ctime>  // For srand and time
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    srand(time(NULL)); 

    std::cout << "\n--- Creating FragTrap ---\n";
    FragTrap robot("Clappy");

    std::cout << "\n--- Creating ScavTrap ---\n";
    ScavTrap guard("GateKeeper");

    std::cout << "\n--- Testing FragTrap Attacks ---\n";
    robot.rangedAttack("Enemy1");
    robot.meleeAttack("Enemy2");

    std::cout << "\n--- Testing FragTrap Damage & Repair ---\n";
    robot.takeDamage(20);
    robot.beRepaired(15);
    robot.takeDamage(200);
    robot.beRepaired(200);

    std::cout << "\n--- Testing VaultHunter.EXE ---\n";
    for (int i = 0; i < 5; ++i) { 
        robot.vaulthunter_dot_exe("RandomTarget");
    }

    std::cout << "\n--- Testing Out-of-Energy Case ---\n";
    robot.vaulthunter_dot_exe("OutOfEnergyTarget");

    std::cout << "\n--- Testing ScavTrap Attacks ---\n";
    guard.rangedAttack("Intruder1");
    guard.meleeAttack("Intruder2");

    std::cout << "\n--- Testing ScavTrap Challenges ---\n";
    for (int i = 0; i < 3; ++i) {
        guard.challengeNewcomer();
    }

    std::cout << "\n--- Destruction Phase ---\n";
    return 0;
}