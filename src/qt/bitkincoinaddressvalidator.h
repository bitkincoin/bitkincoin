// Copyright (c) 2011-2014 The Bitkincoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BitkincoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitkincoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Bitkincoin address widget validator, checks for a valid bitkincoin address.
 */
class BitkincoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitkincoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
