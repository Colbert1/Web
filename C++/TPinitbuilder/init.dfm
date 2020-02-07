object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Travaux Pratiques'
  ClientHeight = 243
  ClientWidth = 472
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 150
    Top = 80
    Width = 145
    Height = 80
    Alignment = taCenter
    AutoSize = False
    Caption = 'TP Builder '
    Color = clAqua
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    Transparent = False
    Visible = False
    WordWrap = True
  end
  object BitBtn1: TBitBtn
    Left = 192
    Top = 120
    Width = 75
    Height = 25
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 0
    Visible = False
  end
  object MainMenu1: TMainMenu
    Left = 24
    Top = 24
    object N11: TMenuItem
      Caption = 'Fichier'
      object Saisie1: TMenuItem
        Caption = 'Saisie'
      end
      object Affichage1: TMenuItem
        Caption = 'Affichage'
      end
      object Quitter1: TMenuItem
        Caption = 'Quitter'
        OnClick = Quitter1Click
      end
    end
    object Couleur1: TMenuItem
      Caption = 'Couleur'
      object Blanc1: TMenuItem
        Caption = 'Blanc'
        OnClick = Blanc1Click
      end
      object Gris1: TMenuItem
        Caption = 'Gris'
        OnClick = Gris1Click
      end
    end
    object Outils1: TMenuItem
      Caption = 'Outils'
      object Aproposde1: TMenuItem
        Caption = 'A propos de...'
        OnClick = Aproposde1Click
      end
    end
  end
end
