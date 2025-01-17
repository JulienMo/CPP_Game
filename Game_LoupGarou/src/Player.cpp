#include "Player.hpp"

Player::Player() {
	this->_id = 1;
	this->_pseudo = "Jhon Doe";
}

Player::~Player() {
	delete this;
}

int Player::getId() {
	return this->_id;
}

std::string Player::getPseudo() {
	return this->_pseudo;
}

bool Player::operator==(Player& other) const {
	return _id == other.getId() && _pseudo == other.getPseudo();
}