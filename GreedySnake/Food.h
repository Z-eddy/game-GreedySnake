#pragma once

#include <QGraphicsItem>

class Food : public QGraphicsItem
{
public:
	Food(qreal x,qreal y,QGraphicsItem *parent = nullptr);
	~Food();

	int getX() { return this->pos().x(); }

	virtual QRectF boundingRect() const override;
	virtual QPainterPath shape() const override;
	virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
};
