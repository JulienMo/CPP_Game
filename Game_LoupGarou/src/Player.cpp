#include "Player.hpp"

Player::Player() noexcept : _id(1), _pseudo("one") {}

Player::Player(int id, std::string pseudo) noexcept : _id(id), _pseudo(pseudo) {}

Player::~Player() {}

int Player::getId() const noexcept {
	return this->_id;
}

std::string Player::getPseudo() const noexcept {
	return this->_pseudo;
}

void Player::setPseudo(std::string pseudo) {
	this->_pseudo = pseudo;
}

bool Player::operator==(Player& other) const noexcept {
	return _id == other.getId() && _pseudo == other.getPseudo();
}